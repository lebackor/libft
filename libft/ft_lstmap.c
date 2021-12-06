#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *l;
	t_list *tmp;
    
    if (!lst)
        return (NULL);
	tmp = lst;
    ft_lstiter(tmp, f(lst->content));
    while (lst)
    {
        l = ft_lstnew(lst);
        if (!l)
        {
			ft_lstclear(&lst, del);
			return (NULL);
		}
        l = l->next;
		lst = lst->next;
    }
    //l->next = NULL;
    return (l);
}