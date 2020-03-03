/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:30:07 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/02 12:37:07 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_reject(char c, const char *reject)
{
	while (*reject)
	{
		if (c == *reject)
			return (1);
		reject++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;

	i = 0;
	while (s[i] && ft_reject(s[i], reject) == 0)
		i++;
	return (i);
}
