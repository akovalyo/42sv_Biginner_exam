/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 18:09:55 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/23 19:23:57 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	pgcd(int nbr1, int nbr2)
{
	int i;
	i = (nbr1 < nbr2) ? nbr1 : nbr2;
	while (i > 0)
	{
		if (nbr1 % i == 0 && nbr2 % i == 0)
		{
				printf("%d", i);
				return ;
		}
		i--;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}
