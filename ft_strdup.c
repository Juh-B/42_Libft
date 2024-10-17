/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:54:44 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/16 16:55:00 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdlib.h>
// #include <stdio.h>

// function returns a pointer to a new string
// which is a duplicate of the string s.

char	*ft_strdup(const char *s)
{
	int		i;
	int		str_len;
	char	*dup;

	i = 0;
	str_len = ft_strlen(s);
	dup = (char *)malloc((str_len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int	main(void)
// {
// 	char	original[20] = "mundooo";
// 	char	*duplicate;

// 	duplicate = ft_strdup(original);
// 	if (duplicate != NULL)
// 	{
// 		printf("%s\n", duplicate);
// 		free(duplicate);
// 	}
// 	else
// 	{
// 		printf("Falha na alocação da memoria");
// 	}
// }