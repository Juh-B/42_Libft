/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:01:24 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/15 16:02:58 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// # include <stddef.h>
// #include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = ft_strlen(src) + 1;
	if (size == 0)
		return (length);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}

// int	main(void)
// {
// 	char	str1[20] = "testtttttttttt";
// 	char	str2[20] = "Olaaaa";

// 	// printf("Antes\n%s\n%s\n\n", str1, str2);
// 	printf("tamanho - %zu\n\n", ft_strlcpy(str1, str2, 4));
// 	printf("Depois\n%s\n%s\n", str1, str2);
// }