/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:14:38 by lebackor          #+#    #+#             */
/*   Updated: 2021/11/30 19:08:50 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned const char *s1;
	unsigned char *d1;
	size_t i;
	size_t a;

	s1 = src;
	d1 = dst;
	i = 0;
	a = 0;
	
	while (s1[a])
		a++;
	while (s1[i] && (i < a +n))
	{
		d1[i] = s1[i];
		i++;
	}
	d1[i] = '\0';
	return (d1);
}
#include <stdio.h>
int main(int ac, char **av)
{
	void *restrict src = NULL;
	void *restrict dest = NULL;
	unsigned const char *s1;
	unsigned char *d1 = NULL;
	(void) ac;
	(void) av;

	s1 = "eeeeet";

	ft_memcpy(dest, src, 1);
	//printf("%s\n", ft_memcpy(dest, src, 5));
	printf("src =%s\n dest =%s\n", src, dest);
}
