#include "libft.h"
void ft_bzero(void *s, size_t n)
{
    char *a;

    a = s;
    while (n != 0)
    {
        *a = '\0';
        a++;
        n--;
    }

}