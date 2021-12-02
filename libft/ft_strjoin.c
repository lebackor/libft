/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:44:24 by lebackor          #+#    #+#             */
/*   Updated: 2021/12/02 16:29:43 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int a;
	int b;
	size_t i;
	char *str;
	
	if (!s1 || !s2)
		return (NULL);
	i = 0;	
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	str = ft_calloc(a + b + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[a] = s2[i];
		i++;
		a++;
	}
	return (str);
}
