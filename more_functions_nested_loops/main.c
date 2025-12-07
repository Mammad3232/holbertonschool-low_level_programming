#include <stdio.h>
#include "main.h"

int main(void)
{
    int i;

    for (i = 32; i <= 126; i++)
        printf("%c: %d\n", i, _isdigit(i));
    return (0);
}

