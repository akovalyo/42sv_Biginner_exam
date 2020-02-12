/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 13:49:29 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/11 13:49:29 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_repeat(char c, char *str, int i)
{
	i--;
	while (i >= 0)
	{
		if (c == str[i])
			return (1);
		i--;
	}
	return (0);
}

int	check_char(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		*str++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (check_repeat(argv[1][i], argv[1], i) == 0)
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (check_repeat(argv[2][i], argv[2], i) == 0 && check_char(argv[2][i], argv[1]) == 0)
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
