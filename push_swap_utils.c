/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:16:28 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/11 14:52:19 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int av_count(char **array)
{
	int count;

	count = 0;
	while (array[count])
		count++;
	// printf("av_count:%d\n", count); // HOX
	return(count);
}

int *allocate_n_fill_stack(char **array)
{
	int len;
	int i;
	int *st_a;

	len = av_count(array);
	st_a = (int *)calloc(sizeof(int *), len);
	if (!st_a)
	{
		free(st_a);
		exit(1);
	}
	i = 0;
	while (array[i])
	{
	// 	printf("array[%d] = %s\n", i, array[i]); // HOX
		st_a[i] = ft_atoi(array[i]);
	printf("st_a[%d] = %d\n", i, st_a[i]); // HOX
		i++;
	}
	return(st_a);
}


// int	check_num(int *st_a)
// {

// }

int	no_duplicates(int *st_a, int len)
{
	int	temp = 0;
	int i = 0;
	// int *aux;

	// if (!(aux = (int *)malloc(sizeof(int) * len + 1)))
	// 	return (NULL);
	// aux[len] = '\0';
	// aux = ft_strdup(st_a);
	while (i < len - 1)
	{
		if (st_a[i + 1] > st_a[i])
		{
			temp = st_a[i];
			st_a[i] = st_a[i + 1];
			st_a[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	i = 0;
	while (st_a[i])
	{
		if (st_a[i] == st_a[i + 1])
			return (0);
		i++;
	}
	return (1); // no duplicates
}

int	*work_stack(char **array)
{
	int *st_a;
	int i = 0;
	int len;

	st_a = 0;
	len = av_count(array);
	st_a = allocate_n_fill_stack(array);
	if (no_duplicates(st_a, len) == 0) // check_num(st_a) == 0 ||
	{
		free(st_a);
		printf("FAILURE\n");
		exit(1);
	}
	while (st_a[i])
	{
		printf("st_a[%d] = %d\n", i, st_a[i]); // HOX
		i++;
	}

	return ((int *)1);

	// if ()
	// else
	// {
	// 	free(array);
	// }
	// return (st_a); //success
}

