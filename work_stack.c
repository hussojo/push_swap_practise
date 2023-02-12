/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:16:28 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/12 15:04:58 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ready_sorted(int *st_a, int len)
{
	int i;

	i = 0;
	while (i < len -1)
	{
		if (st_a[i+1] < st_a[i])
		{
			// printf("not sorted\n");
			return 1;
		}
		i++;
	}
	// printf("sorted\n");
	return 0;
}

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
		if(ft_atoi(array[i]) == 0 && (int)array[i] == 0)
		{
			error_msg("Error\n");
			exit(1);
		}
		st_a[i] = ft_atoi(array[i]);
		i++;
	}
	return(st_a);
}

int	no_duplicates(int *st_a, int len)
{
	int i = 0;
	int *aux;

	aux = (int *)calloc(sizeof(int), len + 1);
	if (!aux)
		return 0;
	aux[len] = '\0';
	while (st_a[i])
	{
		aux[i] = st_a[i];
		i++;
	}
	aux = mini_sort(aux, len);
	i = 0;
	while (aux[i])
	{
		if (aux[i] == aux[i + 1])
			return (0);
		i++;
	}
	free (aux);
	return (1);
}

int	work_stack(char **array)
{
	int *st_a;
	int *st_b;
	// int i = 0;
	int len;

	st_a = 0;
	len = av_count(array);
	st_a = allocate_n_fill_stack(array);
	if (!st_a || st_a == NULL || !no_duplicates(st_a, len))
	{
		free(st_a);
		error_msg("Error\n");
		exit(1);
	}
	if (!ready_sorted(st_a, len)) // list is sorted
	{
		free(st_a);
		exit(0);
	}
	st_b = (int *)calloc(sizeof(int *), len);
	if (len == 3)
		sort_three(st_a, len);

	// while (st_a[i])
	// {
	// 	printf("st_a[%d] = %d\n", i, st_a[i]); // HOX
	// 	i++;
	// }
	return (1);
}

