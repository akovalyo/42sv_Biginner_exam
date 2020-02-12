/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:52:42 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/11 15:52:42 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	wdmatch(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (*s2 ==  '\0')
			return (0);
		else if (*s2 == s1[i])
			i++;
		*s2++;
	}
	write(1, s1, i);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
