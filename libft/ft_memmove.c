/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:04:21 by lebackor          #+#    #+#             */
/*   Updated: 2021/12/02 13:28:24 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *s1;
	unsigned char *d1;
	size_t i;

	s1 = (unsigned char *)src;
	d1 = (unsigned char * )dst;
	i = 0;
	if (s1 == NULL && d1 == NULL)
		return ((void *) d1);
	if (d1 > s1)
	{
		while (i < len)
		{
			d1[i] = s1[ i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
		{
			d1[len + i] = s1[len+ i];
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
