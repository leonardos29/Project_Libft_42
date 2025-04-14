/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 20:55:15 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/13 17:08:04 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int v, size_t q)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = s;
	value = (unsigned char)v;
	while (q--)
	{
		*ptr++ = value;
	}
	return (s);
}
/*
int main()
{
    // Declaração de um array de 10 caracteres
    char	buffer[10];
    
    ft_memset (buffer, 520, sizeof(buffer));

    printf ("Conteúdo do array após ft_memset: ");
    for (int i = 0; i < 10; i++) 
	{
        printf("%d ",buffer[i]);
    }
    printf("\n");

    return 0;
}
*/