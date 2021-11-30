/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:34:08 by lebackor          #+#    #+#             */
/*   Updated: 2021/11/30 17:37:09 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_isalnum(int a);
int ft_isalpha(int a);
int ft_isascii(int c);
int ft_isdigit(int a);
int ft_isprint(int a);
size_t ft_strlen(char *str);
void *ft_memset(void *ptr, int x, size_t n);
void ft_bzero(void *s, size_t n);
