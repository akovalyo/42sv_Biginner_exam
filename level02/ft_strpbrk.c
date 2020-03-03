/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 20:38:36 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/02 12:38:01 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		first(const char *c, const char *s2)
{
	while (*s2)
	{
		if (*c == *s2)
			return (1);
		s2++;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (first(s1, s2) == 1)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
