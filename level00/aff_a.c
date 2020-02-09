/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 19:50:32 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/08 19:50:32 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	aff_a(char *argv)
{
	while (*argv)
	{
		if (*argv == 'a')	
			return (1);
		*argv++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2 && aff_a(argv[1]) == 0)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		write(1, "a\n", 2);
	return (0);
}
