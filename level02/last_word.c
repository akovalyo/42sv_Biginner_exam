/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 10:16:17 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/02 12:41:06 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	last_word(char *str)
{
	int len;
	int end;

	len = ft_strlen(str) - 1;
	while (str[len] == '\t' || str[len] == ' ')
		len--;
	end = len;
	while (str[len] != '\t' && str[len] != ' ' && len >= 0)
		len--;
	len++;
	while (len <= end)
	{
		write(1, &str[len], 1);
		len++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
