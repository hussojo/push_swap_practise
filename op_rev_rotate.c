/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:33:59 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/12 16:20:51 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_op_rra(int *st_a, int len)
{
	int temp;
	int i;

	temp = 0;
	i = 0;
	len = len -1;
	temp = st_a[len];
	while (len > i)
	{
		st_a[len] = st_a[len - 1];
		len--;
	}
	st_a[i] = temp;
	ft_putstr_fd("rra\n", 1);
	return (st_a);
}
