/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 10:58:44 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/10 10:58:44 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
		{
			while (*argv[1])
			{
				if (*argv[1] == *argv[2])
					write(1, argv[3], 1);
				else
					write(1, argv[1], 1);
				*argv[1]++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
