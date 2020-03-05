/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 12:13:17 by exam              #+#    #+#             */
/*   Updated: 2020/03/03 12:19:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_CALC_H
# define RPN_CAL_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int				nbr;
	char 			*oper;
	struct s_list	*next;
}					t_list;

#endif

