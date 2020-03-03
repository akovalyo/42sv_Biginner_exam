/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:26:36 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/02 22:54:24 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char		*skip_spaces(char *str)
{
	while ((*str == ' ' || *str == '\t') && *str)
		str++;
	return (str);
}

char		*skip_fword(char *str)
{
	while (*str != ' ' && *str != '\t' && *str)
		str++;
	return (str);
}

char		*first_word(char *str)
{
	int		i;
	int		j;
	char	*first_w;

	i = 0;
	j = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	first_w = (char *)malloc(sizeof(char) * (i + 1));
	if (first_w == NULL)
		return (NULL);
	while (j < i)
	{
		first_w[j] = str[j];
		j++;
	}
	first_w[j] = '\0';
	return (first_w);
}

void		print_str(char *str)
{
	char	*first_w;
	int		flag;

	flag = 0;
	str = skip_spaces(str);
	first_w = (first_word(str));
	str = skip_fword(str);
	while (*str)
	{
		str = skip_spaces(str);
		while (*str && *str != ' ' && *str != '\t')
		{
			write(1, str, 1);
			str++;
			flag = 1;
		}
		if ((*str + 1) && flag == 1)
		{
			write(1, " ", 1);
			flag = 2;
		}
	}
	while (*first_w)
	{
		write(1, first_w, 1);
		first_w++;
	}
}

int			main(int argc, char **argv)
{
	if (argc >= 2)
	{
		print_str(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
