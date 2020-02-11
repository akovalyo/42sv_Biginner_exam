/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:49:13 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/10 11:49:13 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mirror(char *c)
{
	int i;
	char m1[] = "zyxwvutsrqponmlkjihgfedcba";
	char m2[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";

	if (*c >= 'a' && *c <= 'z')
	{
		i = *c - 'a';
		write(1, &m1[i], 1);
	}
	else if (*c >= 'A' && *c <= 'Z')
	{
		i = *c - 'A';
		write(1, &m2[i], 1);
	}
	else
		write(1, c, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		while(*argv[1])
		{
			mirror(argv[1]);
			*argv[1]++;
		}
				
	}
	write(1, "\n", 1);
	return (0);
}
