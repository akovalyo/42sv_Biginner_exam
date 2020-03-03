/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 15:44:58 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/02 12:23:07 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char odd;
	char ev;

	odd = 'a';
	ev = 'B';
	while (odd <= 'z' && ev <= 'Z')
	{
		write(1, &odd, 1);
		write(1, &ev, 1);
		odd += 2;
		ev += 2;
	}
	write(1, "\n", 1);
	return (0);
}
