/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:01:24 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/17 17:55:29 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// # include <stddef.h>
// #include <stdio.h>

// The functions copy and concatenate strings respectively.
// it copies up to size - 1 characters from the
// NUL-terminated string src to dst, NUL-terminating the result.

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = ft_strlen(src);
	if (size == 0)
		return (length);
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}

// int	main(void)
// {
// 	char	str1[20] = "";
// 	char	str2[20] = "lorem";

// 	printf("tamanho - %zu\n", ft_strlcpy(str1, str2, 15));
// 	printf("Depois - %s\n", str1);
// }