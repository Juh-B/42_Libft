/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:37:25 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/16 14:17:58 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdlib.h>
// #include <stdio.h>

// converts the initial portion of the string pointed to by str to int.
// Accept spaces at the beggin, sign and stop when can't find number.

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]) > 0)
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * sign);
}

// int	main(void)
// {
// 	char	str[20] = "      +2543";

// 	printf("%d\n", atoi(str));
// 	printf("%d\n", ft_atoi(str));
// }