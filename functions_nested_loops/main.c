#include <stdio.h>
#include "main.h"

int main(void)
{
    char c;

    c = 'H';
    printf("%c: %d\n", c, _islower(c));

    c = 'h';
    printf("%c: %d\n", c, _islower(c));

    return 0;
}

