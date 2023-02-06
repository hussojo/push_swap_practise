/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:16:28 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/06 14:21:32 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_int(char **st_a)
{
	printf("Im here\n");
	// int i;

	// i = 0;
	// while (st_a[i])
	return (0);
}

int	no_duplicates(char **st_a)
{
	int	i;

	i = 0;
	while (st_a[i])
	{
		if (st_a[i] == st_a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_ac(char **st_a)
{
	int	i;

	i = 0;
	if (no_duplicates(st_a) == 1)
	{
		free(st_a);
		printf("FAILURE\n");
		exit(EXIT_FAILURE);
	}
	if (is_int(st_a) == 1)
	{
		free(st_a);
		printf("FAILURE\n");
		exit(EXIT_FAILURE);
	}
	return (0); //success
}
