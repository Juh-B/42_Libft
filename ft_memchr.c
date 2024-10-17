/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:39:20 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/17 17:26:56 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char *)s)[i])
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[20] = "Amanda Amadora";
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

// 	printf("%p\n", memchr(tab, -1, 7));
// 	printf("%s\n\n", (char *)memchr(tab, -1, 7));
// 	printf("%p\n", ft_memchr(tab, -1, 7));
// 	printf("%s\n", (char *)ft_memchr(tab, -1, 7));
// }
