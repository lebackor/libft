#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list *k;
    if (!alst || !new)
        return ;
    while (*alst)
        k = ft_lstnew(k);
    k->next = new;
}