#include "libft.h"

// Adds the ’new’ node to the end of the list.

void  ft_lstadd_back(t_list **lst, t_list *new)
{
  t_list  *last_p;

  // if (lst == NULL || new == NULL)
  //   return;
  // if (*lst == NULL)
  //   *lst = new;
  last_p = ft_lstlast(lst);
  last_p->next = new;
  new->next = NULL;
}
