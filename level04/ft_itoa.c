/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 20:20:26 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/21 20:32:23 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		ft_nbrlen(int n)
{
	int i;

	i = 0;
	if (n < 0)
		i++;
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	size_t i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		end;

	end = ft_nbrlen(n);
	new = (char *)malloc(sizeof(char) * end + 1);
	if (new == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(new, "-2147483648"));
	if (n < 0)
	{
		n = -n;
		new[0] = '-';
	}
	new[end] = '\0';
	end--;
	if (n == 0)
		new[end] = '0';
	while (n > 0)
	{
		new[end] = n % 10 + 48;
		n = n / 10;
		end--;
	}
	return (new);
}
