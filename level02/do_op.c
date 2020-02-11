/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:39:53 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/10 13:39:53 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int a;
	int b;
	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		if (*argv[2] == '*')
			printf("%d", a * b);
		else if (*argv[2] == '+')
			printf("%d", a + b);
		else if (*argv[2] == '-')
			printf("%d", a - b);
		else if (*argv[3] == '0')
			printf("Error");
		else if (*argv[2] == '%')
			printf("%d", a % b);
		else if (*argv[2] == '/')
			printf("%d", a / b);
	}
	printf("\n");
	return (0);
}