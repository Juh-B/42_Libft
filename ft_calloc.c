/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-b <jcosta-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:24:29 by jcosta-b          #+#    #+#             */
/*   Updated: 2024/10/16 16:53:21 by jcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <stdio.h>

// it allocates memory for an array of nmemb elements of size bytes each 
// and returns a pointer to the allocated memory. The memory is set to zero.

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

// int	main() {
// 	size_t num_elements = 6;
// 	size_t element_size = sizeof(char);
// 	size_t i;

// 	char* array = (char*)ft_calloc(num_elements, element_size);

// 	if (array == NULL) {
// 		printf("Falha na alocação de memória.\n");
// 		return 1;
// 	}

// 	printf("Valores no array após my_calloc:\n");
// 	i = 0;
// 	while (i < num_elements)
// 	{
// 		printf("array[%zu] = %d\n", i, array[i]);
// 		i++;
// 	}
// 	free(array);
// 	return 0;
// }
