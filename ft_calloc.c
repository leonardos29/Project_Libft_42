/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 03:52:17 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/04/18 04:27:26 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int main()
{
    size_t nmemb = 5;
    size_t size = sizeof(int);
    int *arr = ft_calloc(nmemb, size);
    if (!arr)
    {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Conteúdo da memória alocada:\n");
    for (size_t i = 0; i < nmemb; i++)
    {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }
    free(arr);
    return 0;
}
*/