/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:42:29 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/04/19 19:11:48 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
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