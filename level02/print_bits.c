/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:41:48 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/11 18:41:48 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	int bit;

	i = 0;
	while (i < 8)
	{
		bit = (octet << i) & 0x80;
		if (bit != 0)
			write(1, "1", 1);
		write(1, "0", 1);
		i++;
	}
}
