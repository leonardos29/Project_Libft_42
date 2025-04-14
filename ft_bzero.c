/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:36:57 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/04/13 17:09:13 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t q)
{
	unsigned char	*ptr;

	ptr = s;
	while (q--)
	{
		*ptr++ = 0;
	}
	return (s);
}
/*
int main() {

    char buffer[10];
    for (int i = 0; i < 10; i++) buffer[i] = 'A';
	printf("Antes de zerar a memoria : ");
	for (int i = 0; i < 10; i++) {
        printf("%d", buffer[i]);
    }
	printf("\n");
    ft_bzero(buffer, 10);
	printf("Depois de zerar a memoria : ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", buffer[i]);
    }
    return 0;
}
*/