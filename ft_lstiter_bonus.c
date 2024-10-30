#include "libft.h"

// Iterates the list ’lst’ and applies the function ’f’
// to the contents of each node.

void  ft_lstiter(t_list *lst, void (*f)(void *))
{
  if (lst == NULL || f == NULL)
    return ;
  while(lst)
  {
    f(lst->content);
    lst = lst->next;
  }
}
