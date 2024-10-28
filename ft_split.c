/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:18:48 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/25 14:53:05 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocate (with malloc(3)) and returns an array of strings
// obtained by dividing by ’s’, using the character ’c’ as a delimiter.
// The array must end with a NULL pointer.

static size_t elem_array(const char *s, char c)
{
	size_t	i;
	size_t	array_len;
	int			control_elem;

	 i = 0;
	 array_len = 0;
	 control_elem = 0;
	while (s[i])
	{
		if (s[i] == c && control_elem == 0)
		{
			array_len++;
			control_elem = 1;
		}
		else
			control_elem = 0;
		while (s[i] == c && s[i + 1] == c)
			i++;
		if (s[i] != c && s[i + 1] == '\0')
			array_len++;
		i++;
	}
	return (array_len);
}

static char *new_string(const char *str, unsigned int	i, unsigned int	start)
{
	size_t	str_len;
	char  	*new_str;

	str_len = i - start;
	if (str[i + 1] == '\0')
		str_len++;
	new_str = (char *)malloc(str_len + 1 * sizeof(char));
	ft_memcpy(new_str, str, str_len);
	new_str[str_len] = '\0';
	return (new_str);
}

static char	*allocate_array(char **array, char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	start;

	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] == c || s[i + 1] == '\0')
		{
			array[j] = new_string(s + start, i, start);
			if (array[j] == NULL)
			{
				free(array);
				return (NULL);
			}
			start = i + 1;
			j++;
			while (s[i + 1] == c)
			{
				i++;
				start++;
			}
		}
		i++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t			array_len;
	char			**array;

	array_len = elem_array(s, c);
	array = (char **)malloc((array_len + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	array[array_len] = NULL;
	allocate_array(array, s, c);
	return (array);
}

int	main(void)
{
	char	**str;

	str = ft_split("Oi Mundo Doido", ' ');
	// printf("%s\n", *str);
	// printf("1. %s\n", str[0]);
	// printf("2. %s\n", str[1]);
	free(str);
}
