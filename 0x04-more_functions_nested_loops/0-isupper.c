#include "main.h"


/**
 * _isupper - checks for uppercase character
 * character to be checked is c
 * Return: 1 if c is uppercase, 0 otherwise
 */

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

