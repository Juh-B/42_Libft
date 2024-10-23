/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:06:10 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/21 18:28:14 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// function locates the first occurrence of the
// null-terminated string little in the string big, where not
// more than len characters are searched

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	to_find_len;

	i = 0;
	to_find_len = ft_strlen(to_find);
	if (to_find_len == 0)
		return ((char *)str);
	if (n == 0)
		return (NULL);
	while (i <= n - to_find_len && str[i])
	{
		j = 0;
		while (j < to_find_len && str[i + j] == to_find[j])
			j++;
		if (j == to_find_len && to_find_len <= n)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
