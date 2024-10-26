#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Allocate (with malloc(3)) and returns an array of strings
// obtained by dividing by ’s’, using the character ’c’ as a delimiter.
// The array must end with a NULL pointer.

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	unsigned int	n_str;
	size_t			str_len;
	char			**array;

	i = 0;
	j = 0;
	len = 0;
	n_str = 0;
	while (s[i])
	{
		if (s[i] == c)
			n_str++;
		i++;
	}
	array = (char **)malloc((n_str + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);

	str_len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			str_len = i + 1 - str_len;
			array[j] = (char *)malloc(str_len + 1 * sizeof(char));
			if (array[j] == NULL)
				return (NULL);
			ft_memcpy(array[j], &s[len], str_len);
			array[j][str_len] = '\0';
			len = i + 1;
			j++;
		}
		else if (s[i + 1] == '\0')
		{
			str_len = i + 1 - str_len;
			array[j] = (char *)malloc(str_len + 1 * sizeof(char));
			if (array[j] == NULL)
				return (NULL);
			ft_memcpy(array[j], &s[len], str_len);
			array[j][str_len] = '\0';
			len = i + 1;
		}
		i++;
	}
	return (array);
}

int	main(void)
{
	char	**str;

	str = ft_split("Oi Mundo Doido", ' ');
	// printf("%s\n", *str);
	// printf("1. %s\n", str[0]);
	// printf("2. %s\n", str[1]);
	// free(str);
}
