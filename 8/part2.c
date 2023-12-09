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

size_t find_node(uint32_t node, const struct node *nodes, size_t num_nodes) 
{
    for (size_t i = 0; i < num_nodes; i++) {
        if (node == nodes[i].name) {
            return i;
        }
    }
    return num_nodes;
}

int is_start(uint32_t node)
{
    return ((node & 0xFF) == 'A');
}

int is_end(uint32_t node)
{
    return ((node & 0xFF) == 'Z');
}

void print_node(uint32_t node) 
{
    printf("%c%c%c", (node&0xFF0000)>>16, (node&0xFF00)>>8, (node&0xFF));
}

size_t gcd(size_t a, size_t b)
{
    while (a != b) {
        if (a > b) {
            a = a-b;
        } else {
            b = b-a;
        }
    }
    return a;
}

size_t lcm(size_t a, size_t b)
{
    return (a * b) / gcd(a, b);
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

    size_t paths = 0;
    for(size_t i = 0; i < num_nodes; i++) {
        char name[4], left[4], right[4];
        if (fscanf(input, "%3s = (%3s, %3s)\n", name, left, right) != 3) {
            goto free_nodes;
        }
        nodes[i].name = name[0] << 16 | name[1] << 8 | name[2];
        nodes[i].left = left[0] << 16 | left[1] << 8 | left[2];
        nodes[i].right = right[0] << 16 | right[1] << 8 | right[2];
        if (is_start(nodes[i].name)) {
            paths++;
        }
    }

    printf("num nodes: %zu, num paths: %zu\n", num_nodes, paths);
    printf("last node:");
    print_node(nodes[num_nodes-1].name);
    printf("\n");

    size_t *locations = malloc(paths * sizeof(size_t));
    if (locations == NULL) {
        goto free_nodes;
    }
    size_t j = 0;
    for (size_t i = 0; i < num_nodes; i++) {
        if (is_start(nodes[i].name)) {
            locations[j] = i;
            j++;
        }
    }
    for (size_t i = 0; i < paths; i++) {
        size_t steps = 0;
        char *next_instruction = instructions;
        while (!is_end(nodes[locations[i]].name)) {
            if (*next_instruction == '\0' || *next_instruction == '\n') {
                next_instruction = instructions;
            }
            uint32_t next_node_name = (*next_instruction == 'L') ? nodes[locations[i]].left : nodes[locations[i]].right;
            locations[i] = find_node(next_node_name, nodes, num_nodes);
            if (locations[i] == num_nodes) {
                goto free_locations;
            }
            steps++;
            next_instruction++;
        }
        locations[i] = steps;
    }

    size_t curr_lcm = locations[0];
    for (size_t i = 1; i < paths; i++) {
        curr_lcm = lcm(curr_lcm, locations[i]);
    }

    // if (steps % 1000000 == 0) {
        // printf("steps: %zu\n", steps);
        // for (size_t i = 0; i < paths; i++) {
        //     print_node(nodes[locations[i]].name);
        //     printf(" ");
        // }
        // printf("\n");
    // }

    printf("steps: %zu, paths: %zu\n", curr_lcm, paths);
free_locations:
    free(locations);
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