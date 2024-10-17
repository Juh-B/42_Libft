/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:40:55 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/16 16:48:15 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>

char	*ft_strrchr(const char *string, int c)
{
	int	i;
	int	last_c;

	i = 0;
	last_c = -1;
	while (string[i])
	{
		if (string[i] == c)
			last_c = i;
		i++;
	}
	if (last_c >= 0)
		return ((char *)&string[last_c]);
	return (NULL);
}

// int	main(void)
// {
// 	char	str[20] = "Amanda Amadora";

// 	printf("%s\n", strrchr(str, 'B'));
// 	printf("%s\n", ft_strrchr(str, 'B'));
// }
