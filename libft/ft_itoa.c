/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:00:53 by lebackor          #+#    #+#             */
/*   Updated: 2021/12/02 19:18:46 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_fill_tab(int i, long long nb, int sign)
{
	char *str;

	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (--i >= sign)
	{
		str[i] = nb % 10 + 48;
		nb /= 10;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}


char *ft_itoa(int n)
{
	int i;
	long long nb;
	char *str;

	i = 0;
	nb = (long long)n;
	while (n /= 10)
		i++;
	if (nb < 0)
	{	
		nb *= -1;
		str = ft_fill_tab(i + 2, nb, 1);
	}
	else
		str = ft_fill_tab(i + 1, nb, 0);
	return (str);
}
