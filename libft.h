/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:16:49 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/16 20:39:05 by leonasil         ###   ########.fr       */
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
char	*ft_strrchr(const char *str, int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif