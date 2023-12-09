#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

struct node {
    uint32_t name;
    uint32_t left;
    uint32_t right;
};

const uint32_t start = 'A' << 16 | 'A' << 8 | 'A';
const uint32_t target = 'Z' << 16 | 'Z' << 8 | 'Z';

size_t find_node(uint32_t node, const struct node *nodes, size_t num_nodes) 
{
    for (size_t i = 0; i < num_nodes; i++) {
        if (node == nodes[i].name) {
            return i;
        }
    }
    return num_nodes;
}

int main(int argc, char **argv) 
{
    int ret = 1;
    if (argc != 2) {
        return 1;
    }
    FILE* input = fopen(argv[1], "r");
    if (input == NULL) {
        goto exit;
    }
    char* line = NULL;
    size_t linesize = 0;
    if (getline(&line, &linesize, input) <= 0) {
        goto close;
    }
    char* instructions = strdup(line);
    if (instructions == NULL) {
        goto close;
    }
    size_t num_nodes = 0;
    if (fscanf(input, "%zu\n", &num_nodes) != 1) {
        goto free_instructions;
    }
    struct node *nodes = malloc(num_nodes * sizeof(struct node));
    if (nodes == NULL) {
        goto free_nodes;
    }

    for(size_t i = 0; i < num_nodes; i++) {
        char name[4], left[4], right[4];
        if (fscanf(input, "%3s = (%3s, %3s)\n", name, left, right) != 3) {
            goto free_nodes;
        }
        nodes[i].name = name[0] << 16 | name[1] << 8 | name[2];
        nodes[i].left = left[0] << 16 | left[1] << 8 | left[2];
        nodes[i].right = right[0] << 16 | right[1] << 8 | right[2];
    }

    size_t location = find_node(start, nodes, num_nodes);
    if (location == num_nodes) {
        goto free_nodes;
    }
    size_t steps = 0;
    char *next_instruction = instructions;
    while (nodes[location].name != target) {
        if (*next_instruction == '\0' || *next_instruction == '\n') {
            next_instruction = instructions;
        }
        uint32_t next_node_name = (*next_instruction == 'L') ? nodes[location].left : nodes[location].right;
        next_instruction++;
        location = find_node(next_node_name, nodes, num_nodes);
        steps++;
        if (location == num_nodes) {
            goto free_nodes;
        }
    }

    printf("steps: %zu\n", steps);

free_nodes:
    free(nodes);
free_instructions:
    free(instructions);
close:
    free(line);
    fclose(input);
exit:
    return ret;
}