/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:31:28 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/12 15:06:47 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_op_sa(int *st_a)
{
	int temp;
	int i;

	temp = 0;
	i = 0;
	temp = st_a[i];
	st_a[i] = st_a[i + 1];
	st_a[i + 1] = temp;
	ft_putstr_fd("sa\n", 1);
	return(st_a);
}

int	*ft_op_rra(int *st_a)
{
	int temp;
	int i;

	temp = 0;
	i = 0;
	temp = st_a[2];
	st_a[2] = st_a[1];
	st_a[1] = st_a[0];
	st_a[0] = temp;
	ft_putstr_fd("rra\n", 1);
	return (st_a);
}

int	*ft_op_ra(int *st_a)
{
	int temp;
	int i;

	temp = 0;
	i = 0;
	temp = st_a[0];
	st_a[0] = st_a[1];
	st_a[1] = st_a[2];
	st_a[2] = temp;
	ft_putstr_fd("ra\n", 1);
	return (st_a);
}

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
			ft_op_rra(st_a);
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
