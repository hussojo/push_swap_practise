/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_six.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:31:28 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/14 10:32:31 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(int *st_a, int len)
{
	int i = 0;
	while (ready_sorted(st_a, len) == 1)
	{
		if (st_a[i] > st_a[i+1])
		{
			ft_op_sa(st_a);
		}
		else
		{
			ft_op_rra(st_a);
		}
	}
	// here
	while (i < 3)
	{
		printf("st_a[%d] = %d\n", i , st_a[i]);
		i++;
	}
	// to here
	return ;
}

// void	sort_four(int *st_a, int *st_b, int len)
// {
// 	ft_op_pb(st_a[find_min(st_a)], st_b, len);
// 	sort_three();
// }

// int find_min(char *st_a)
// {
// 	char min;
// 	int i = 0;
// 	int pos = 0;

// 	min = st_a[0];
// 	while(i < 4) // is best?
// 	{
// 		if (min > st_a[i])
// 		{
// 			min = st_a[i];
// 			pos = i;
// 		}
// 		i++;
// 	}
// 	printf("position is: %d\n", pos);
// 	return (pos);
// }

