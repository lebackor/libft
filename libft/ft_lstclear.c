#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;

    while(*lst)
    {
        tmp = (*lst);
        del(tmp);
        free(tmp);
        (*lst) = (*lst)->next;
    }
    (*lst)->next = NULL;
}

