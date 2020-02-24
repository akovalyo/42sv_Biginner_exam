/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 08:30:42 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/24 08:30:42 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c < 'Z')
		return (2);
	return (0);
}

int	print_word(char *word, int i)
{
	if (letter(word[i]) == 1)
		ft_putchar(word[i] + 32);
	else
		ft_putchar(word[i]);
	i++;
	while (word[i] && (word[i] != ' ' || word[i] != '\t'))
	{
		if (letter(word[i]) == 2)
			ft_putchar(word[i] - 32);
		ft_putchar(word[i]);
		i++;
	}
	return (i);
}

void	str_capitalizer(char *str)
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
			
int	main(int argc, char **argv)
{

	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		while (argc > 1)
		{
			str_capitalizer(argv[argc]);
			argc--;
		}
	}
	return (0);
}
