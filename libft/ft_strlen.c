/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:27:25 by lebackor          #+#    #+#             */
/*   Updated: 2021/11/23 16:37:54 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
size_t ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);

}
#include <string.h>
#include <libc.h>

int main(int ac, char **av)
{
	(void) ac;

	printf("%lu\n", strlen(av[1]));
	printf("%zu\n", ft_strlen(av[1]));
}
