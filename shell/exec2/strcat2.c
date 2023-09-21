#include "main.h"

char *_strcatcope(char *dest, const char *src)
{
    int i = 0;
    int dest_len = _strlen(dest);

    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';
    return dest;
}
