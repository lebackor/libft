/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:31:37 by lebackor          #+#    #+#             */
/*   Updated: 2021/12/02 17:44:43 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char *str;
	size_t i;

	i = 0;
	str = malloc(count * size);
	if ((!str))
		return (str);
	ft_memset(str, '\0', count * size);
	return (str);
}
