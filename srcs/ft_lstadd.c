#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}


void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	(*f)(lst);
	if (lst->next != NULL)
		ft_lstiter(lst->next, (*f));
}