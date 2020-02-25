/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:23:45 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/24 18:42:10 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int max;
	unsigned int min;
	unsigned int d_max;

	if (a == 0 || b == 0)
		return (0);	
	max = (a > b) ? a : b;
	min = (a > b) ? b : a;
	d_max = max;
	while (d_max % min != 0)
	{
		d_max = d_max + 1;
		while (d_max % max != 0)		
			d_max++;
	}
	return (d_max);
}
