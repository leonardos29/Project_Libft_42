/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:39:19 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/16 21:19:01 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_l;
	size_t	src_l;
	size_t	i;

	dst_l = 0;
	src_l = 0;
	i = 0;
	
	while (dst[dst_l] != '\0')
	{
		dst_l++;
	}

	while (src[src_l] != '\0')
	{
		src_l++;
	}

	if(size <= dst_l)
	{
		return (dst_l + src_l);
	}

	while ((i < size - dst_l - 1) && (*src != '\0'))
	{
		dst[dst_l + i] = src[i];
		i++;
	}

	dst[dst_l + i] = '\0';
	
	return (dst_l + src_l);
}
/*
int main() {
    char dst[10] = "Hello, ";
    const char *src = "World!";
    
    // Tentando concatenar com um buffer pequeno
    size_t result = ft_strlcat(dst, src, sizeof(dst));
    
    // Imprimindo o resultado
    printf("Resultado: %s\n", dst);
    printf("Tamanho da string concatenada: %zu\n", result);

    return 0;
}
*/