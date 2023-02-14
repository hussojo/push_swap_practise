/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:57:13 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/13 13:44:26 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *ft_op_pb(int st_a, int *st_b, int len)
{
	int i;

	i = 0;
	len = len -1;
	if (st_b[len] == '\0')
		st_b[len] = st_a;
	else
	{
		while (st_b[len] != '\0')
			len--;
		st_b[len] = st_a;
	}
	return 0;
}

