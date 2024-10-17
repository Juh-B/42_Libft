/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:06:10 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/16 12:36:30 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

// function locates the first occurrence of the
// null-terminated string little in the string big, where not
// more than len characters are searched

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int	i;
	int	j;
	int	to_find_len;

	i = 0;
	j = 0;
	to_find_len = ft_strlen(to_find);
	if (*to_find == '\0')
		return ((char *)str);
	while (i < n && str[i])
	{
		if (j == to_find_len)
			return (&((char *)str)[i - j]);
		if (str[i] == to_find[j] && to_find[j])
			j++;
		else
			j = 0;
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[20] = "Amanda Amadora";
// 	char	str1[20] = "Bella";

// 	printf("%s\n", ft_strnstr(str, str1, 15));
// }