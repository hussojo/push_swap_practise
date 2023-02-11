/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:16:28 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/11 17:04:22 by jhusso           ###   ########.fr       */
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
		if(!ft_atoi(array[i]))
		{
			error_msg("Error\n");
			exit(1);
		}
		st_a[i] = ft_atoi(array[i]);
	// printf("st_a[%d] = %d\n", i, st_a[i]); // HOX
		i++;
	}
	return(st_a);
}

int *mini_sort(int *aux, int len)
{
	int	temp = 0;
	int i = 0;

	while (i < len - 1)
	{
		if (aux[i + 1] > aux[i])
		{
			temp = aux[i];
			aux[i] = aux[i + 1];
			aux[i + 1] = temp;
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
	return (aux);
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
	return (1);
}

int	work_stack(char **array)
{
	int *st_a;
	// int i = 0;
	int len;

	st_a = 0;
	len = av_count(array);
	st_a = allocate_n_fill_stack(array);
	if (!no_duplicates(st_a, len))
	{
		free(st_a);
		error_msg("Error\n");
		exit(1);
	}
	// while (st_a[i])
	// {
	// 	printf("st_a[%d] = %d\n", i, st_a[i]); // HOX
	// 	i++;
	// }
	return (1);
}

