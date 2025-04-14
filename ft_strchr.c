/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:42:29 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/04/14 16:55:25 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if ((char)c == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
/*
int main(void)
{
    const char *s = "42 Network";

    // Teste com caractere presente
    printf("Procurando 'N': %s\n", ft_strchr(s, 'N'));
    
    // Teste com caractere ausente
    printf("Procurando 'x': %s\n", ft_strchr(s, 'x'));
    
    // Teste com o caractere nulo '\0' (fim da string)
    printf("Procurando '\\0': %s\n", ft_strchr(s, '\0'));
    return 0;
}
*/