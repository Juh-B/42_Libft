#include "libft.h"

// Allocates (with malloc(3)) and returns a new node.
// The member variable ’content’ is initialized to the value
// of the parameter ’content’. The variable ’next’ is
// initialized to NULL.

t_list  *ft_lstnew(void *content)
{
  t_list  *new_node;

  new_node = malloc(sizeof(t_list));
  if (new_node == NULL)
    return (NULL);
  new_node->content = content;
  new_node->next = NULL;
  return (new_node);
}
