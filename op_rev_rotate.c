/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:33:59 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/14 17:03:40 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// last elem becomes first one

void ft_op_rra(int *st_a)
{
	int temp;
	int i;
	int j;

	temp = 0;
	i = 0;
	j = 0;
	while (st_a[j + 1])
		j++;
	j = j + 1;
	temp = st_a[j];
	while (j > i)
	{
		st_a[j] = st_a[j - 1];
		j--;
	}
	st_a[i] = temp;
	ft_putstr_fd("rra\n", 1);
	return ;
}
