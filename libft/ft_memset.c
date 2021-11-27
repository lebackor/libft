#include "libft.h"

void *ft_memset(void *ptr, int x, size_t n)
{
    char *a;

    a = ptr;
    while(n != 0)
    {
        *a = (unsigned char)x;
        a++;
        n--;
    }
    return (a);
}