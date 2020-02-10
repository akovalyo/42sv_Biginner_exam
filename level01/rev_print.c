/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 10:01:06 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/10 10:01:06 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int i;
	int len;

	i = 0;
	if (argc == 2)
	{
	len = ft_strlen(argv[1]) - 1;
		while (len >= 0)
		{
			write(1, &argv[1][len], 1);
			len --;
		}
	}
	write(1, "\n", 1);
	return (0);
}
