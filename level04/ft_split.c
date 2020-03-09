/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 09:01:54 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/09 09:14:18 by akovalyo         ###   ########.fr       */
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

int     total_words(char *str)
{
        int n;

        n = 0;
        while (*str)
        {
                while (*str && *str == ' ')
                        str++;
                if (*str && *str != ' ')
                {
                        n++;
                        while (*str && *str != ' ')
                                str++;
                }
        }
        return (n);
}

int     w_size(char *str, int i)
{
        int j;

        j = 0;
        while (str[i] && str[i] != ' ')
        {
                j++;
                i++;
        }
        return (j);
}

int     last_word_i(char *s, int i)
{
        while (s[i] == ' ')
                i--;
        while (s[i] != ' ' && i > 0)
                i--;
        if (s[i] == ' ')
                return (i + 1);
        return (i);
}

char	*ft_strsub(char *s, int start, int len)
{
	char	*fresh;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	fresh = (char *)malloc(len + 1);
	if (fresh == NULL)
		return (NULL);
	while (i < len)
	{
		fresh[i] = s[start + i];
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}

char            **ft_split(char *str)
{
        int             words;
        int             i;
        char    **array;

        if (!str)
                return (NULL);
        i = ft_strlen(str) - 1;
        words = total_words(str);
        array = (char **)malloc(words * sizeof(char) + 1);
        if (array == NULL)
                return (NULL);
        array[words] = NULL;
        words--;
        while (i > 0)
        {
                i = last_word_i(str, i);
                array[words] = ft_strsub(str, i, w_size(str, i));
                i--;
                words--;
        }
        return (array);
}
