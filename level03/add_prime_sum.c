/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 19:48:48 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/09 20:04:03 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + 48;
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int sign;
	int nbr;

	sign = 1;
	nbr = 0;
	while (*str == '\n' || *str == '\t' || *str == '\v' ||
			*str == '\r' || *str == '\f' || *str == ' ')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (nbr * sign);
}

int		check_prime(int nbr)
{
	int i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		sum_prime(int nbr)
{
	int sum;

	sum = 0;
	while (nbr > 2)
	{
		if (check_prime(nbr) == 1)
			sum += nbr;
		nbr--;
	}
	return (sum + 2);
}

int		main(int argc, char **argv)
{
	int nbr;

	if (argc == 2 && (nbr = ft_atoi(argv[1])) >= 2)
			ft_putnbr(sum_prime(nbr));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
