/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:16:49 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/14 16:46:50 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stddef.h> 

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
void	*ft_memset(void *s, int v, size_t q);
void	*ft_bzero(void *s, size_t q);
void	*ft_memcpy(void *dest, const void *src, size_t q);
void	*ft_memmove(void *dest, const void *src, size_t q);
char	*ft_strchr(const char *str, int c);

#endif