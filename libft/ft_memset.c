#include <stddef.h>

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
#include <stdio.h>
int main(int ac, char **av)
{
    (void) ac;
    (void) av;
    
    char str[50] = "salut les amis ca va";
    printf("%s\n", str);
    ft_memset(str + 3, '5', 3);
    printf("%s\n", str);
}