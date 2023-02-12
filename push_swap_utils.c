/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:44:51 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/12 10:36:24 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void error_msg(char *msg)
{
	ft_putstr_fd(msg, 2);
}

int *mini_sort(int *array, int len)
{
	int	temp = 0;
	int i = 0;

	while (i < len - 1)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	// while (aux[i]) !!! ASK MERI how to print out integers in array!!!
	// {
	// 	printf("sorted = %d\n", (int)aux[i]);
	// 	i++;
	// }
	return (array);
}
