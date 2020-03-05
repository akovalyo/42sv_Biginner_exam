/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 11:50:22 by exam              #+#    #+#             */
/*   Updated: 2020/03/03 12:34:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn_calc.h"

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_valid(char *str)
{
	if (*str >= '0' && *str <= '9')
		return (1);
	else if (*str == ' ')
		return (0);
	else if (*str == '+' || *str == '-' || *str == '*' || *str == '/' || *str == '%')
		return (2);
	return (-1);
}

int	do_op(int *opnd, int opnd_i, char *oprt, int oprt_i, static int result)
{
	int a;
	int b;
	
	a = opnd[i];
	b = opnd[i + 1];

	if (oprt[oprt_i] == '*')
		result = a * b;
	else if (oprt[oprt_i] == '+')
		result = a + b;
	else if (oprt[oprt_i] == '-')
		result = a - b;
	else if (b == '0')
		return (-1);
	else if (oprt[oprt_i] == '%')
		result = a % b;
	else if (oprt[oprt_i] == '/')
		result = a / b;
	return (0);
}

int		rpn_calc(char *str, static int result)
{
	int	opnd[ft_strlen(str)];
	char	*oprt[ft_strlen(str)];
	int	opnd_i;
	int	oprt_i;
	int 	i;

	opnd_i = 0;
	oprt_i = 0;
	i = 0;
	while (str[i])
	{
		if (
		else if 
		


		else
			return (-1);	
}

int		main(int argc, char **argv)
{
	static int result;

	result = 0;

	if (argc != 2 || rpn_calc(argv[1], result) == -1)
		printf("Error");
	printf("%d\n", result);
	return (0);
}
