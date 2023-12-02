#include <stdio.h>
#include <ctype.h>
#include <string.h>

int to_int(char *a, ssize_t len);

int main(int argc, char **argv) 
{
    if (argc != 2) {
        return 1;
    }
    FILE *input = fopen(argv[1], "r");
    char *line = NULL;
    ssize_t len;
    size_t total = 0;
    while ((len = getline(&line, &len, input)) > 0) {
        char a = '\0';
        char b = '\0';
        for (ssize_t i = 0; i < len; i++) {
            int temp; 
            temp = to_int(&line[i], len - i);
            if (temp < 0) {
                continue;
            }
            if (!a) {
                a = temp;
                continue;
            }
            b = temp;
        }
        if (!b) {
            b = a;
        }
        int cal = a*10 + b;
        printf("+ %d\n", cal);
        total += cal;
    }
    printf("total: %d\n", total);
    return 0;
}

int to_int(char *a, ssize_t len)
{
    char curr = *a;
    if (isdigit(curr)) {
        return curr-'0';
    }
    if (len >= 3) {
        if (strncmp("one", a, 3) == 0) {
            return 1;
        } else if (strncmp("two", a, 3) == 0) {
            return 2;
        } else if (strncmp("six", a, 3) == 0) {
            return 6;
        }
    }
    if (len >= 4) {
        if (strncmp("four", a, 4) == 0) {
            return 4;
        } else if (strncmp("five", a, 4) == 0) {
            return 5;
        } else if (strncmp("nine", a, 4) == 0) {
            return 9;
        }
    }
    if (len >= 5) {
        if (strncmp("three", a, 5) == 0) {
            return 3;
        } else if (strncmp("seven", a, 5) == 0) {
            return 7;
        } else if (strncmp("eight", a, 5) == 0) {
            return 8;
        }
    }
    return -1;
}
