/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 22:59:17 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/02 23:07:50 by akovalyo         ###   ########.fr       */
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

int     total_words(char *str, char c)
{
        int n;

        n = 0;
        while (*str)
        {
                while (*str && *str == c)
                        str++;
                if (*str && *str != c)
                {
                        n++;
                        while (*str && *str != c)
                                str++;
                }
        }
        return (n);
}

int     w_size(char *str, char c, int i)
{
        int j;

        j = 0;
        while (str[i] && str[i] != c)
        {
                j++;
                i++;
        }
        return (j);
}

int     last_word_i(char *s, char c, int i)
{
        while (s[i] == c)
                i--;
        while (s[i] != c && i > 0)
                i--;
        if (s[i] == c)
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

char            **ft_strsplit(char const *s, char c)
{
        int             words;
        int             i;
        char    **array;

        if (!s || !c)
                return (NULL);
        i = ft_strlen(s) - 1;
        words = total_words(s, c);
        array = (char **)malloc(words * sizeof(char) + 1);
        if (array == NULL)
                return (NULL);
        array[words] = NULL;
        words--;
        while (i > 0)
        {
                i = last_word_i(s, c, i);
                array[words] = ft_strsub(s, i, w_size(s, c, i));
                i--;
                words--;
        }
        return (array);
}
