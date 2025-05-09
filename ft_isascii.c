/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 08:19:13 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/18 08:59:19 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
	{
		return (1);
	}
	return (0);
}
/*
int main() 
{
    printf("Teste 1 (c = 'A'): %d\n", ft_isascii('A'));  
    return 0;
}
*/
