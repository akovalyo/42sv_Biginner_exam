/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 10:48:50 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/10 10:48:50 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *c)
{
	if ((*c >= 'a' && *c <= 'y') || (*c >= 'A' && *c <= 'Y'))
		       *c = *c + 1;
	else if (*c == 'z' || *c == 'Z')
		*c = *c - 25;
	write(1, c, 1);
}	

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			rotone(argv[1]);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
