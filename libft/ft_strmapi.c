/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 19:37:53 by lebackor          #+#    #+#             */
/*   Updated: 2021/12/02 20:39:45 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *str;

	i = 0;
	str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str || !s)
		return (NULL);
	while (i < ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
/*
char f(unsigned int i, char c)
{
	c += i;
	printf("%c\n", c);
	return (c);
}


int main(int ac, char **av)
{
	(void) ac;

	printf("%s\n", ft_strmapi(av[1], f));
}*/
