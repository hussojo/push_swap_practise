/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_six.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:31:28 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/14 17:03:38 by jhusso           ###   ########.fr       */
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
	// while (i < 3)
	// {
	// 	printf("st_a[%d] = %d\n", i , st_a[i]);
	// 	i++;
	// }
	// to here
	return ;
}

void	sort_four(int *st_a, int *st_b, int len)
{
	int index;
	int i = 0;

	index = find_min(st_a); // returns index of smallest
	// if (index == 3)
		// ft_op_rra(st_a);
	ft_op_pb(st_a[0], st_b);
	while (i < 4)
	{
		printf("st_a[%d] = %d\n", i , st_a[i]);
		i++;
	}
	ft_push_a_up(st_a);
	st_a[0] = 0;
	while (i < 4)
	{
		printf("st_a[%d] = %d\n", i , st_a[i]);
		i++;
	}
	while (i < 4)
	{
		printf("st_a[%d] = %d\n", i , st_a[i]);
		i++;
	}
	sort_three(st_a, len);
	//ft_op_pa()
}

int find_min(int *st_a)
{
	char min;
	int i = 0;
	int index = 0;

	min = st_a[0];
	while(i < 4) // is best?
	{
		if (min > st_a[i])
		{
			min = st_a[i];
			index = i;
		}
		i++;
	}
	printf("index is: %d\n", index);
	return (index);
}

void sort_under_six(int *st_a, int *st_b, int len)
{
	// if (len == 2)
		// sort_two()
	if (len == 3)
		sort_three(st_a, len);
	if (len == 4)
		sort_four(st_a, st_b, len);
}

