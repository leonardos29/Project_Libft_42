/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:34:46 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/16 18:18:42 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*start;

	start = str;
	while (*str != '\0')
	{
		str ++;
	}
	if ((char)c == '\0')
	{
		return ((char *)str);
	}
	while (str >= start)
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str--;
	}
	return (NULL);
}
/*
int main(void)
{
    const char *s = "azinhairo";

    // Teste com caractere presente
    printf("Procurando 'A': %s\n", ft_strrchr(s, 'a'));
    
    // Teste com caractere ausente
    printf("Procurando 'x': %s\n", ft_strrchr(s, 'x'));
    
    // Teste com o caractere nulo '\0' (fim da string)
    printf("Procurando '\\0': %s\n", ft_strrchr(s, '\0'));
    return 0;
}
*/