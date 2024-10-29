#include "libft.h"

// Returns the last node of a list.

t_list  *ft_lstlast(t_list *lst)
{
  t_list  *p;
  if (lst == NULL)
    return (NULL);
  while (lst)
  {
    if (lst->next == NULL)
      p = lst;
    lst = lst->next;
  }
  return (p);
}
