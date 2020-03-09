/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:48:33 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/02 14:26:28 by akovalyo         ###   ########.fr       */
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
	else if (c >= 'A' && c <= 'Z')
		return (2);
	return (0);
}

int		print_word(char *word, int i)
{
	while (word[i] && word[i] != ' ' && word[i] != '\t')
	{
		if (word[i + 1] == '\0' || word[i + 1] == ' ' || word[i + 1] == '\t')
		{
			if (letter(word[i]) == 1)
				ft_putchar(word[i] - 32);
			else
				ft_putchar(word[i]);
			return (i + 1);
		}
		if (letter(word[i]) == 2)
			ft_putchar(word[i] + 32);
		else
			ft_putchar(word[i]);
		i++;
	}
	return (i);
}

void	rstr_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (letter(str[i]) == 0)
		{
			ft_putchar(str[i]);
			i++;
		}
		else if (letter(str[i]) > 0)
			i = print_word(str, i);
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
			rstr_capitalizer(argv[param]);
			ft_putchar('\n');
			param++;
		}
	}
	return (0);
}
