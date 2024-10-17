/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:23:09 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/17 16:01:35 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

#define _CRT_SECURE_DEPRECATE_MEMORY

// copies n bytes from memory area src to memory area dest.
// The memory areas may overlap: copying takes place as though the bytes
// in src are first copied into a temporary array that does not overlap
// src or dest, and the bytes are then copied from the temporary array to dest.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (ft_strlen(dest) <= n)
		((unsigned char *)dest)[n] = '\0';
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str[20] = "oi";
// 	char	str1[20] = "oi";
// 	char	str2[20] = "Olaaa";

// 	printf("Antes\n%s\n%s\n", str, str2);
// 	memmove(str, str2, 3);
// 	printf("Depois\n%s\n%s\n\n", str, str2);
// 	printf("Antes\n%s\n%s\n", str1, str2);
// 	ft_memmove(str1, str2, 3);
// 	printf("Depois\n%s\n%s\n", str1, str2);
// }
