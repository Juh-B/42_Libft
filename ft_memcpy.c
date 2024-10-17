/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:28:39 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/16 16:55:40 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define _CRT_SECURE_DEPRECATE_MEMORY
// #include <string.h>
// #include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str[] = "oii bella";
// 	char	str1[] = "oii bella";
// 	char	str2[] = "Jully";

// 	printf("1 Antes\nstr - %s\nstr2 - %s\n", str, str2);
// 	memcpy(str + 4, str2, 4);
// 	printf("\n1 Depois\nstr - %s\nstr2 - %s\n", str, str2);
// 	printf("\n2 Antes\nstr1 - %s\nstr2 - %s\n", str1, str2);
// 	ft_memcpy(str1 + 4, str2, 4);
// 	printf("\n2 Depois\nstr1 - %s\nstr2 - %s\n", str1, str2);
// }