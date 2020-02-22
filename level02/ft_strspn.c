/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:30:07 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/10 16:30:07 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_accept(char c, const char *accept)
{
	while (*accept)
	{
		if (c == *accept)
			return (1);
		accept++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i;

	i = 0;
	while (s[i] && ft_accept(s[i], accept) == 1)
		i++;
	return (i);
}
