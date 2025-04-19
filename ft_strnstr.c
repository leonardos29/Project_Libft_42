/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 01:58:35 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/04/19 19:15:09 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
	{
		return ((char *)big);
	}
	while ((i < len) && big[i] != '\0')
	{
		j = 0;
		while ((little[j] == big[i + j]) && (little[j] && (i + j) < len))
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)&big[i]);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
/*
int main()
{
	char	nome[] = "Leonardo";
	char	sub[] = "ona";
	printf("%s", ft_strnstr(nome,sub,4));
}
*/