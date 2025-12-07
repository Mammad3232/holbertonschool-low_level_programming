#include <stdio.h>
#include "main.h"

int main(void)
{
    char c = 'A';

    if (_isalpha(c))
        printf("%c is a letter\n", c);
    else
        printf("%c is NOT a letter\n", c);

    return 0;
}
