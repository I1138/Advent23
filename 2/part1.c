#include <stdio.h>
#include <string.h>
#include <sys/param.h>

#define RED_LIM 12
#define BLUE_LIM 14
#define GREEN_LIM 13

int main(int argc, char **argv)
{
    int ret = 1;
    if (argc != 2) {
        goto exit;
    }
    FILE *input = fopen(argv[1], "r");
    char *line = NULL;
    size_t buflen = 0;
    ssize_t len;

    size_t total = 0;
    while ((len = getline(&line, &buflen, input)) > 0) {
        char *strptr = NULL;
        size_t id;
        size_t max_red = 0;
        size_t max_green = 0;
        size_t max_blue = 0;
        if (sscanf(line, "Game %zu", &id) != 1) {
            goto exit;
        }
        strptr = strchr(line, ':') + 1;
        if (strptr == NULL) {
            goto exit;
        }
        size_t val;
        char color[10];
        while (sscanf(strptr, " %zu %s", &val, color) == 2) {
            // printf("v %zu %9s\n", val, color);
            if (strncmp("red", color, 3) == 0) {
                max_red = MAX(val, max_red);
            } else if (strncmp("blue", color, 4) == 0) {
                max_blue = MAX(val, max_blue);
            } else if (strncmp("green", color, 5) == 0) {
                max_green = MAX(val, max_green);
            } else {
                goto exit;
            }
            char *tmp_a = strchr(strptr, ',');
            char *tmp_b = strchr(strptr, ';');
            if (tmp_a == NULL && tmp_b == NULL) {
                break;
            } else if (tmp_a == NULL) {
                strptr = tmp_b;
            } else if (tmp_b == NULL) {
                strptr = tmp_a;
            } else {
                strptr = MIN(tmp_a, tmp_b);
            }
            strptr++;
        }
        if (max_red <= RED_LIM && max_blue <= BLUE_LIM && max_green <= GREEN_LIM) {
            printf("+%zu\n", id);
            // printf("%zu %zu %zu\n", max_red, max_blue, max_green);
            total += id;
        }
    }
    printf("Total %zu\n", total);

    ret = 0;
exit:
    if (ret) {
        printf("Last line %zu %s", len, line);
    }
    return 0;
}