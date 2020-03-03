/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:53:02 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/02 12:42:53 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	new;

	i = 0;
	new = 0;
	while (i < 7)
	{
		new |= (((octet >> i) & 1) << (7 - i));
		i++;
	}
	return (new);
}
