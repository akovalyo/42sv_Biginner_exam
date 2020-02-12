/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 08:05:07 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/11 08:05:07 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (check_char(argv[1][i], &argv[2][0]) == 1 && check_repeat(argv[1][i], argv[1], i) == 0)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
