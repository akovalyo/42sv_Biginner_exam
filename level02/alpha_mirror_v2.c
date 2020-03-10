/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:49:13 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/09 15:36:39 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mirror(char *c)
{
	int mir;
	int n;

	if (*c >= 'a' && *c <= 'z')
		n = *c - 'a' + 1;
	else if (*c >= 'A' && *c <= 'Z')
		n = *c - 'A' + 1;
	else
	{
		write(1, c, 1);
		return ;
	}
	mir = *c + 27 - 2 * n;
	write(1, &mir, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			mirror(argv[1]);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
