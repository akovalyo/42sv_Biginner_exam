/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:08:31 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/10 15:08:31 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int sign;
	int nbr;

	sign = 1;
	nbr = 0;
	
	while (*str == '\n' || *str == '\t' || *str == '\v' || *str == '\r' || *str == '\f' || *str == ' ')
		*str++;
	if (*str == '-')
	{
		sign = -1;
		*str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + (*str - '0');
		*str++;
	}
	return (nbr * sign);
}


