#include "libft.h"

// Takes as a parameter a node and frees the memory
// of its contents using the ’del’ function given as a
// parameter and frees the node.
// The memory of ’next’ should not be freed.

void  ft_lstdelone(t_list *lst, void (*del)(void *))
{
  if (lst == NULL || del == NULL)
    return ;
  del(lst->content);
  free(lst);
}
