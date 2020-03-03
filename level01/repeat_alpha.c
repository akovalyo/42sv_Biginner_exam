/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 09:47:50 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/02 12:29:30 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int r;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				r = argv[1][i] - 'A' + 1;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				r = argv[1][i] - 'a' + 1;
			else
				r = 1;
			while (r > 0)
			{
				write(1, &argv[1][i], 1);
				r--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
