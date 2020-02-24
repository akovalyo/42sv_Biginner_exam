/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:22:46 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/23 16:27:37 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(const char *str)
{
	int nbr;

	nbr = 0;
	
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (nbr);
}

int		hex_ascii(int n)
{
	if (n >= 0 && n<= 9)
		return (n + '0');
	else
		return (n + 87);
}

void	ft_printhex(int nbr)
{
	if (nbr >= 16)
		ft_printhex(nbr / 16);
	ft_putchar(hex_ascii(nbr % 16));
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_printhex(ft_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}
