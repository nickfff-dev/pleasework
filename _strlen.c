#include "main.h"

int _strlen(char *s)
{
        int i = 0;

        for (i = 0; s[i] != '\0'; i++)
                ;
        return (i);
}
