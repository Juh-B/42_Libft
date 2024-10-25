// #include "libft.h"

// Apply the function 'f' to each character of a string passed
// as an argument, passing its index as the first argument.
// Each character is passed by address to 'f' to be modified if necessary.

void  ft_striteri(char *s, void (*f)(unsigned int, char*))
{
  unsigned int i;

  i = 0;
  while (s[i])
  {
    f(i, &s[i]);
    i++;
  }
}
