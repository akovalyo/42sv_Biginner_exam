/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 17:35:42 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/02 14:18:27 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	range_size(int start, int end)
{
	int numbers;

	numbers = end - start;
	if (numbers < 0)
		numbers = -numbers;
	return (numbers + 1);
}

int	*ft_range(int start, int end)
{
	int *range;
	int numbers;
	int i;
	int step;

	i = 0;
	numbers = range_size(start, end);
	range = (int *)malloc(sizeof(int) * numbers);
	if (range == NULL)
		return (NULL);
	if (start <= end)
		step = 1;
	else
		step = -1;
	while (i < numbers)
	{
		range[i] = start;
		start += step;
		i++;
	}
	return (range);
}
