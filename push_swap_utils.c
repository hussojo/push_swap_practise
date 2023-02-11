/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:16:28 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/11 11:09:23 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int **allocate_stack(char **array, int **st_a)
{
	int len;

	len = av_count(array);
	st_a = (int **)calloc(sizeof(int *), len);
	// if (!st_a || st_a[0] == NULL)
	// {
	// 	free
	// 	exit
	// }
	return(st_a);
}

int av_count(char **array)
{
	int count;

	count = 0;
	while (array[count])
		count++;
	printf("av_count:%d\n", count);
	return(count);
}

int	is_int(char **array)
{
	int i;

	i = 0;
	while (array[i])
	{
		if (ft_atoi(array[i]) == 0)
		{
			return 0; // non integer found
		}
		i++;
	}
	return (1); // all integers
}

int	no_duplicates(char **array)
{
	int	i;
	int j;
	int len;

	len = av_count(array);
	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len) //arglen
		{
			if (array[i] == array[j])
				return 0; //duplicate found
			j++;
		}
		i++;
	}
	return (1); // no duplicates
}

int	**ft_check_ac(char **array)
{
	int **st_a;
	int i = 0;

	st_a = 0;
	if (is_int(array) == 0 || no_duplicates(array) == 0)
	{
		free(array);
		printf("FAILURE\n");
		exit(1);
	}
	else
	{
		st_a = allocate_stack(array, st_a);
		// fill_stack(array, st_a);
	}
	while (st_a[i])
	{
		printf("st_a[%d] = %s\n", i, array[i]);
		i++;
	}

	return (st_a); //success
}

