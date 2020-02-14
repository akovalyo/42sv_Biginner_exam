/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 19:42:00 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/13 19:42:00 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
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

void	epur(char *str)
{
	int end;
	int i;

	end = last_word(str, ft_strlen(str));
	i = 0;
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
				write(1, " ", 1);
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur(argv[1]);
	write(1, "\n", 1);
	return (0);
}
