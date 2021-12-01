/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:04:21 by lebackor          #+#    #+#             */
/*   Updated: 2021/12/01 19:24:50 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned const char *s1;
	unsigned char *d1;
	size_t i;

	s1 = (unsigned const char *)src;
	d1 = (unsigned char * )dst;
	i = 0;
	if (s1 == NULL && d1 == NULL)
		return ((void *) d1);
	if (s1 > d1)
	{
		while (len-- > 0)
		{
			d1[len] = s1[len];
		}

	}
	else
	{
		while (i < len)
		{
			d1[i] = s1[i];
			i++;
		}
	}
	return ((void *)d1);
}
/*
#include <libc.h>
int main(int ac, char **av)
{
	(void) ac;

	printf("%s\n", ft_memmove(av[1], av[2], atoi(av[3])));
	printf("%s\n", memmove(av[1], av[2], atoi(av[3])));
}*/
