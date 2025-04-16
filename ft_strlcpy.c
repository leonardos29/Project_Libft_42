/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:44:24 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/16 20:33:05 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_l;

	i = 0;
	src_l = 0;
	while ((i < size - 1) && (*src != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dst[i] = '\0';
	}
	while (*src)
	{
		src_l++;
		src++;
	}
	return (src_l);
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