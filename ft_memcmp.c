/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:49:36 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/16 19:13:28 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*b1;
	const unsigned char	*b2;
	size_t				i;

	b1 = (const unsigned char *)s1;
	b2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (b1[i] != b2[i])
		{
			return (b1[i] - b2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char str1[] = "hello";
    char str2[] = "hello";
    printf("Teste 1: %d\n", ft_memcmp(str1, str2, -2));  
    return 0;
}
*/