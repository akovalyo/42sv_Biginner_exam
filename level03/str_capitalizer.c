/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 08:30:42 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/02 14:27:48 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c < 'Z')
		return (2);
	return (0);
}

int		print_word(char *word, int i, int f)
{
	if (letter(word[i]) == 1 && f == 0)
		ft_putchar(word[i] - 32);
	else
		ft_putchar(word[i]);
	i++;
	while (word[i] && word[i] != ' ' && word[i] != '\t')
	{
		if (letter(word[i]) == 2)
			ft_putchar(word[i] + 32);
		else
			ft_putchar(word[i]);
		i++;
	}
	return (i);
}

void	str_capitalizer(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (str[i])
	{
		if (letter(str[i]) == 0)
		{
			if (str[i] != ' ')
				flag = 1;
			ft_putchar(str[i]);
			i++;
		}
		else if (letter(str[i]) > 0)
			i = print_word(str, i, flag);
	}
}

int		main(int argc, char **argv)
{
	int param;

	param = 1;
	if (argc == 1)
		ft_putchar('\n');
	else
	{
		while (param < argc)
		{
			str_capitalizer(argv[param]);
			ft_putchar('\n');
			param++;
		}
	}
	return (0);
}