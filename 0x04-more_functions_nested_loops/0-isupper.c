#include "main.h"


int _isupper(int c)
{
    char upper = 'A';
    int isupper = 0;
    for (; upper <= 'Z'; upper++)
    {
        if ( c == upper)
        {
            isupper = 1;
            break;
        }
    }

    return (isupper);
}

