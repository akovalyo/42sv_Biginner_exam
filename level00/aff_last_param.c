/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 20:41:29 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/08 20:41:29 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		while (*argv[argc - 1])
		{
			write(1, argv[argc - 1], 1);
			*argv[argc - 1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
