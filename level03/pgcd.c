/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 18:09:55 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/23 19:18:34 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	nbr = nbr % 10 + '0';
	write(1, &nbr, 1);
}

void	pgcd(int nbr1, int nbr2)
{
	int i;
	i = (nbr1 < nbr2) ? nbr1 : nbr2;
	while (i > 0)
	{
		if (nbr1 % i == 0 && nbr2 % i == 0)
		{
				ft_putnbr(i);
				return ;
		}
		i--;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	write(1, "\n", 1);
	return (0);
}
