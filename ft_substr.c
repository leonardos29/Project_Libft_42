/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 12:14:38 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/20 13:30:58 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	char	*subst;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	else if (start + len > s_len)
	{
		len = s_len - start;
	}
	subst = malloc((len + 1) * sizeof(char));
	if (!subst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		subst[i] = s[start + i];
		i++;
	}
	subst[i] = '\0';
	return (subst);
}
/*
int main()
{
	char str[] = "Leonardo";
	char *result = ft_substr(str,4,4);
	printf("%s",result);
	printf("\n");
	free(result);
}
*/