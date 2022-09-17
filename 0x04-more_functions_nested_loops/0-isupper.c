#include "main.h"


int _isupper(int c)
{
    char upperToCheck = 'A';
    int isupperV = 0;
    for (; upper <= 'Z'; upper++)
    {
        if ( c == upperToCheck)
        {
            isupperV = 1;
            break;
        }
    }

    return (isupperV);
}

