/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 03:18:50 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/17 03:18:50 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_value(char c, int str_base)
{
	int digit;

	if (c >= '0' && c <= '9')
		digit = c - '0';
	else if (c >= 'A' && c <= 'F')
		digit = c - 'A' + 10;
	else if (c >= 'a' && c <= '0')
		digit = c - 'a' + 10;
	else
		return (-1);
	if (digit < str_base)
		return (digit);
	return (-1);
}

int	base_str_len(const char *str, int i, int str_base)
{
	while (str[i] && ft_value(str[i], str_base) != -1)
		i++;
	return (i - 1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int sign;
	int result;
	int i;
	int end;
	int power;

	sign = 1;
	result = 0;
	i = 0;
	power = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	end = base_str_len(str, i, str_base);
	while (end >= i)
	{	
		result += ft_value(str[end], str_base) * power;
		power *= str_base;
		end--;
	}
	return (result * sign);
}
