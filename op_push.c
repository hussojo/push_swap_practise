/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:57:13 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/14 17:03:41 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_push_a_up(int *st_a)
{
	int i;

	i = 0;
	while(st_a[i])
	{
		st_a[i] = st_a[i + 1];
		printf("here\n");
		i++;
	}
	st_a[i] = 0;
	return ;
}

void ft_op_pb(int st_a, int *st_b)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	temp = 0;
	if (st_b[i] != '\0')
	{
		while (st_b[j + 1]) //goes until last occupied space
			j++;
		while(j > i)
		{
			st_b[j + 1] = st_b[j];
			j--;
		}
	}
	st_b[i] = st_a;
	i = 0;
	while (i < 4)
	{
		printf("st_b[%d] = %d\n", i , st_b[i]);
		i++;
	}
	i = 0;
	printf("st_a[%d] = %d\n", i , st_a);
	ft_putstr_fd("pb\n", 1);
	return ;
}
