#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list *l;
    
    if (!new)
        return ;
    l = *alst;
    if (!*alst)
    {
        (*alst)= new;
        //l->next = NULL;
    }
    else
    {    
        while(l->next)
            l = l->next;
        l->next = new;
        //l->next->next = NULL;
    }
}
/*
int main()
{
    t_list  l;

}*/