/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 17:31:36 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/23 19:04:57 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	nbr = nbr % 10 + '0';
	write(1, &nbr, 1);
}

int		main(int argc, char **argv)
{
	(void)argv;

	if (argc == 1)
		ft_putnbr(0);
	else
		ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
