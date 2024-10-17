/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:53:58 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/16 12:05:02 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>
// function compares the first n bytes (each interpreted as unsigned char)
// of the memory areas s1 and s2.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (((unsigned char *)s1)[i - 1] - ((unsigned char *)s2)[i - 1]);
}

// int	main(void)
// {
// 	char	str[20] = "Linda ZAmora";
// 	char	str1[20] = "Linda Raposa";

// 	printf("%d\n", memcmp(str, str1, 10));
// 	printf("%d\n", ft_memcmp(str, str1, 10));
// }