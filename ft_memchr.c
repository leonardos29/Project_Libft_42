/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:57:08 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/18 10:14:18 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((void *)&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char buffer[] = "Hello, World!";
	char *result = ft_memchr(buffer, 'o', 12);

	if (result != NULL)
		printf("Encontrado: %c\n", *result);
	else
		printf("Não encontrado.\n");

	return 0;
}
*/