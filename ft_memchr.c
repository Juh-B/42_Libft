/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:39:20 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/16 16:52:39 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n && ((unsigned char *)s)[i])
	{
		if (((unsigned char *)s)[i] == c)
			return ((unsigned char *)&s[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[20] = "Amanda Amadora";

// 	printf("%p\n", memchr(str, 'A', 6));
// 	printf("%p\n", ft_memchr(str, 'A', 6));
// }
