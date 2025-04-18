/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 01:58:35 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/04/18 02:53:10 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while ((i < len) && haystack[i] != '\0')
	{
		j = 0;
		while ((needle[j] == haystack[i + j]) && (needle[j] && (i + j) < len))
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)&haystack[i]);
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