/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 10:16:00 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/02 12:30:11 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *c)
{
	if ((*c >= 'a' && *c <= 'm') || (*c >= 'A' && *c <= 'M'))
		*c = *c + 13;
	else if ((*c >= 'n' && *c <= 'z') || (*c >= 'N' && *c <= 'Z'))
		*c = *c - 13;
	write(1, c, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			rot_13(argv[1]);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
