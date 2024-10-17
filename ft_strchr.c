/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:34:36 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/17 16:12:42 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>

char	*ft_strchr(const char *string, int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return ((char *)&string[ft_strlen(string)]);
	while (string[i])
	{
		if (string[i] == c)
			return (&((char *)string)[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[20] = "Ola Mundo";

// 	printf("%s\n", strchr(str, 'b'));
// 	printf("%s\n", ft_strchr(str, 'b'));
// }