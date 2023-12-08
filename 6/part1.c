#include <stddef.h>
#include <stdio.h>

// size_t t[] = {7, 15, 30};
// size_t d[] = {9, 40, 200};

size_t num = 4;
size_t t[] = {42, 89, 91, 89};
size_t d[] = {308, 1170, 1291, 1467};

size_t distance(size_t hold, size_t len)
{
    return hold * (len - hold);
}

int main() 
{
    size_t total = 1;
    for (size_t i = 0; i < num; i++) {
        size_t v = 0;
        for (size_t hold = 1; hold < t[i]; hold++) {
            v += (distance(hold, t[i]) > d[i]) ? 1 : 0;
        }
        printf("%2zu ", v);
        total *= v;
    }
    printf("\nt: %zu\n", total);
    return 0;
}