/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:17:59 by lebackor          #+#    #+#             */
/*   Updated: 2021/12/02 18:00:42 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int k;
	int cnt;
	char *str;

	k = ft_strlen(s1);
	i = 0;
	j = 0;
	cnt = 0;
	while (is_set(s1[i], set))
		i++;
	while (is_set(s1[k - 1], set))
		k--;
	while (i++ < k)
		cnt++;
	str = ft_calloc(cnt + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (is_set(s1[i], set))
		i++;
	while (i < k)
		str[j++] = s1[i++];
	return (str);
}
/*
#include <libc.h>
int main(int ac, char **av)
{
	(void) ac;

	printf("%s\n", ft_strtrim(av[1], av[2]));

}*/
