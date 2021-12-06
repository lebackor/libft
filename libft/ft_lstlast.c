#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    int i;
    int j;

    i = ft_lstsize(lst);
    j = 0;
    while (j < i - 1)
    {
        lst = lst->next;
        j++;
    }
    return (lst);
}