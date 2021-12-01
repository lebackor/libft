/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:33:04 by lebackor          #+#    #+#             */
/*   Updated: 2021/12/01 21:38:44 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && i + j < len)
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
