/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 16:50:14 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/02 14:20:44 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checkstr(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else if (*s2 == '\0')
			return (0);
		else
			s2++;
	}
	return (1);
}

int		hidenp(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 == *s2)
		{
			if (checkstr(s1, s2) == 1)
				return (1);
			s1++;
		}
		s2++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (argv[1][0] == '\0' || hidenp(argv[1], argv[2]) == 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
