#include "libft.h"

// Adds the ’new’ node to the beginning of the list.

void  ft_lstadd_front(t_list **lst, t_list *new)
{
  new->next = *lst;
  *lst = new;
}
