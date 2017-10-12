#include "libft.h"

/*
** a = head ; z = tail ; n = curreNt;
*/

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{

	t_list *a;
	t_list *z;
	t_list *n;

	a = NULL;

	while (lst != NULL)
	{
		z = f(lst);
		if (a == NULL)
		{
			a = z;
			n = z;
		}
		else
		{
			n->next = z;
			n = n->next;
		}
		lst = lst->next;
	}

	return (a);

}
