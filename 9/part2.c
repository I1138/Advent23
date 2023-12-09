#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>











int main(int argc, char **argv)
{
    int ret = 1;
    if (argc != 2) {
        goto exit;
    }
    FILE *input = fopen(argv[1], "r");
    if (input == NULL) {
        goto exit;
    }
    size_t columns;
    if (fscanf(input, "%zu\n", &columns) != 1) {
        goto close;
    }
    size_t rows = columns+1;
    int64_t *buffer = malloc(rows * columns * sizeof(int64_t));
    if (buffer == NULL) {
        goto close;
    }

    int64_t total = 0;
    char *line = NULL;
    size_t line_size = 0;
    while (getline(&line, &line_size, input) > 0) {
        char *next = line;
        for (ssize_t i = columns-1; i >= 0; i--) {
            buffer[i] = strtoll(next, &next, 10);
            if ((*next == '\n' || *next == '\0') && i != 0) {
                goto free;
            }
            // printf("%ld ", buffer[i]);
        }
        // printf("\n");
        size_t i;
        for (i = 1; i < rows; i++) {
            size_t prev_row = (i-1) * columns;
            size_t row_offset = i * columns;
            size_t row_sum = 0;
            for (size_t j = 0; j < (columns - i); j++) {
                buffer[row_offset + j] = buffer[prev_row+j+1] - buffer[prev_row+j];
                row_sum += buffer[row_offset + j];
                // printf("%ld ", buffer[row_offset + j]);
            }
            // printf("\n");
            if (row_sum == 0) {
                buffer[row_offset + (columns - i)] = 0;
                break;
            } 
        }
        for (i--; i != 0; i--) {
            int64_t prev_diff = buffer[(i+1) * columns + (columns - (i+1))];
            size_t row_offset = i * columns;
            buffer[row_offset + (columns-i)] = buffer[row_offset+(columns-i-1)] + prev_diff;
            // printf("e: %ld\n", buffer[row_offset + (columns-i)] );
        }

        size_t extrapolation = buffer[columns-1] + buffer[columns + (columns-1)];
        printf("E: %ld\n", extrapolation);
        // for (size_t k = 0; k < rows; k++) {
        //     for (size_t l = 0; l < columns; l++) {
        //         printf("%6ld ", buffer[k*columns + l]);
        //     }
        //     printf("\n");
        // }
        total += extrapolation;
    }
    printf("total %ld\n", total);
    ret = 0;
free:
    free(line);
    free(buffer);
close:
    fclose(input);
exit:
    return ret;
}