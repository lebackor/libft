/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:57:12 by lebackor          #+#    #+#             */
/*   Updated: 2021/11/23 14:46:52 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int a)
{
	if ((a >= 'A' && a <= 'B') || (a >= 'a' && a <= 'z'))
		return (1);
	else
		return (0);
}

#include <libc.h>
#include <ctype.h>
int main(int ac, char **av)
{
	(void) ac;
	int b;

	b = av[1][0];
	printf("ft ;%d\n", ft_isalpha(b));
	printf("%d\n", isalpha(b));
}
