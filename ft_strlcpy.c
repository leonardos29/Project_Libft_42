/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:44:24 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/18 03:08:22 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while ((i < size - 1) && (*src != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main() {
    char src[] = "Leonardo";
    char dst[10];

    size_t copied = ft_strlcpy(dst, src, sizeof(dst));

    printf("Destino: %s\n", dst); 
    printf("Tamanho da string copiada: %zu\n", copied);

    return 0;
}
*/