#include <stddef.h>

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

#include <stdio.h>
int main(int ac, char **av)
{
    (void) ac;
    (void) av;
    
    char str[50] = "salut les amis ca va";
    printf("%s\n", str);
    ft_bzero(str, 5);
    printf("%s\n", str);
}