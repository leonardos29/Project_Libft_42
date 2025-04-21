/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:08:33 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/21 21:24:16 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_len(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*int_to_str(char *str, size_t position, long n)
{
	str[position] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		str[--position] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	ln;
	size_t	s_len;

	ln = n;
	s_len = count_len(ln);
	s = malloc((s_len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	int_to_str(s, s_len, ln);
	return (s);
}
/*
int main()
{
	char	*str = ft_itoa(0);
    printf("%s \n",str);
	free(str);
}
*/
