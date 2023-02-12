/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:32:19 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/12 16:20:42 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// first elem becomes the last one

int	*ft_op_ra(int *st_a, int len)
{
	int temp;
	int i;

	temp = 0;
	i = 0;
	temp = st_a[i];
	while (i < len - 1)
	{
		st_a[i] = st_a[i + 1];
		i++;
	}
	st_a[len-1] = temp;
	ft_putstr_fd("ra\n", 1);
	return (st_a);
}
