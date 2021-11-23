/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:06:55 by lebackor          #+#    #+#             */
/*   Updated: 2021/11/23 16:21:08 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int a)
{

	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122) || (a >= '0' && a <= '9'))
		return (1);
	else
		return (0);
}

#include <libc.h>
#include <ctype.h>
int main(int ac, char **av)
{
	(void) ac;

	printf("%d\n", isalnum(av[1][0]));
	printf("%d\n", ft_isalnum(av[1][0]));
}
