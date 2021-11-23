/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:59:59 by lebackor          #+#    #+#             */
/*   Updated: 2021/11/23 16:06:44 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

#include <libc.h>
#include <ctype.h>
int main (int ac, char **av)
{
	(void) ac;

	printf("%d\n", ft_isdigit(av[1][0]));
}
