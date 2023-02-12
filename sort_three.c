/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:31:28 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/12 15:57:51 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(int *st_a, int len)
{
	int i = 0;
	int count = 0;
	while (ready_sorted(st_a, len) == 1)
	{
		if (st_a[i] > st_a[i+1])
		{
			ft_op_sa(st_a);
		}
		else
		{
			ft_op_rra(st_a, len);
		}
		count++;
	}
	while (st_a[i])
	{
		printf("st_a[%d] = %d\n", i , st_a[i]);
		i++;
	}
	return ;
}
