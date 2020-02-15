/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 20:01:45 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/14 20:01:45 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    str_end(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i - 1);
}

int	last_word(char *str, int end)
{
	while (str[end] == ' ' || str[end] == '\t')
		end--;
	return (end);
}

void    expand(char *str)
{
	int i;
	int end;

	i = 0;
	end = last_word(str, str_end(str));
	while (i <= end)
	{
		if (str[i] == ' ' || str[i] == '\t')
			i++;
		else
		{
			while (str[i] != ' ' && str[i] != '\t')
			{
				write(1, &str[i], 1);
				i++;
				if (i > end)
					return ;
			}
			write(1, "   ", 3);
		}
	}
}

int    main(int argc, char **argv)
{
	if (argc == 2)
		expand(argv[1]);
	write(1, "\n", 1);
	return (0);
}
