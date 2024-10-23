/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:34:36 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/21 16:57:43 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// function returns a pointer to the first occurrence of
// the character c in the string s.

char	*ft_strchr(const char *string, int c)
{
	int				i;
	unsigned char	ch;

	ch = (unsigned char)c;
	i = 0;
	while (string[i])
	{
		if (string[i] == ch)
			return ((char *)&string[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *)&string[i]);
	return (NULL);
}
