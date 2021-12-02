/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:17:06 by lebackor          #+#    #+#             */
/*   Updated: 2021/12/02 11:52:33 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char *s1;
	size_t i;

	i = 0;
	s1 = (unsigned const char *)s;

	while (i < n)
	{
		if (s1[i] == (unsigned const char )c)
			return ((void *)&s1[i]);
		i++;
	}
	return (NULL);
}
/*
#include <libc.h>

int main(int ac, char **av)
{
	(void) ac;
	printf("%s\n", ft_memchr(av[1], atoi(av[2]), atoi(av[3])));
	printf("%s\n", memchr(av[1], atoi(av[2]), atoi(av[3])));

}
*/
