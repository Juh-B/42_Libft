/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:12:18 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/16 16:53:04 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// # include <stddef.h>
// #include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int		i;
	int		dest_len;
	size_t	length;

	length = ft_strlen(dest) + ft_strlen(src) + 1;
	dest_len = ft_strlen(dest);
	i = 0;
	if (size == 0)
		return (length);
	while (src[i] && ft_strlen(dest) < size)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (length);
}

// int	main(void)
// {
// 	char	str1[20] = "Bella ";
// 	char	str2[20] = "Amora";

// 	printf("tamanho - %zu\n\n", ft_strlcat(str1, str2, 15));
// 	printf("Depois\n%s\n%s\n", str1, str2);
// }