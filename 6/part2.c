#include <stddef.h>
#include <stdio.h>

// size_t t = 71530;
// size_t d = 940200;

size_t t = 42899189;
size_t d = 308117012911467;

size_t distance(size_t hold, size_t len)
{
    return hold * (len - hold);
}

int main() 
{
    size_t total = 0;
    for (size_t hold = 1; hold < t; hold++) {
        size_t dist = distance(hold, t);
        total += (dist > d) ? 1 : 0;
    }
    printf("t: %zu\n", total);
    return 0;
}