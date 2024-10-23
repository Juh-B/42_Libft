/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:54:17 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/23 17:43:50 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

// Allocate (with malloc) and return a copy of 's1' with the 
// specified characteres removed of begin and the end of 'set'.

// recebi um string e um conj d caracteres (segunda str)
// procu tds as str na string e retira elas
// retorna um array alocado com a string nova sem as str

static size_t	ft_setstr(char const *s1, char const *set)
{
	size_t	rm_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	rm_len = 0;
	while(s1[i])
	{
		if (j == ft_strlen(set))
		{
			rm_len += j;
			j = 0;
		}
		if(s1[i] == set[j] && set[j])
			j++;
		else
			j = 0;
		i++;
	}
	return (rm_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	rm_len;
	size_t	news_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	rm_len = ft_setstr(s1, set);
	news_len = ft_strlen(s1) - rm_len;
	newstr = (char *)malloc(news_len + 1 * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	newstr[news_len] = '\0';
	news_len--;
	i = 0;
	j = 0;
	rm_len = 0;
	while(s1[i])
	{
		if (j == ft_strlen(set))
		{
			rm_len += j;
			j = 0;
		}
		if(s1[i] == set[j] && set[j])
			j++;
		else
			j = 0;
		
		newstr[i - rm_len] = s1[i];
		i++;
	}
	return (newstr);
}

// int	main(void)
// {
// 	char	*str;
	
// 	str = ft_strtrim("Banana Bananinha", "na");
// 	printf("%s\n", str);
// 	free(str);
// }