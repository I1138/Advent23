#include <stdio.h>
#include <ctype.h>

int to_int(char a, char b);

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
            char curr = line[i];
            if (!isdigit(curr)) {
                continue;
            }
            if (!a) {
                a = curr;
                continue;
            }
            b = curr;
        }
        if (!b) {
            b = a;
        }
        int cal = to_int(a,b);
        printf("+ %d\n", cal);
        total += cal;
    }
    printf("total: %d\n", total);
    return 0;
}

int to_int(char a, char b) 
{
    return (a-'0')*10 + (b-'0');
}
