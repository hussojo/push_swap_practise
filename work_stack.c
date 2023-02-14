/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:16:28 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/14 17:03:39 by jhusso           ###   ########.fr       */
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

void	do_checks(int *st_a, int len)
{
	if (!st_a || st_a == NULL)
	{
		free(st_a);
		error_msg("Error alloc\n", 1);
	}
	if (!no_duplicates(st_a, len))
	{
		free(st_a);
		error_msg("Error dup\n", 1);
	}
	if (!ready_sorted(st_a, len)) // list is sorted
	{
		free(st_a);
		exit(0);
	}
}

int *allocate_n_fill_stack(char **array)
{
	int len;
	int i;
	int num;
	int *st_a;

	len = av_count(array);
	st_a = (int *)ft_calloc(sizeof(int *), len);
	if (!st_a)
	{
		free(st_a);
		printf("error callocin st_a\n");
		exit(1);
	}
	i = 0;
	num = 1;
	while (array[i])
	{
		num = ft_atoi(array[i]); // returnvalue of atoi 0 == error
		// printf("NUM=%d\n", num);
		// printf("array[i] = %s\n", array[i]);
		if(num == 0 && *array[i] != '0')
		{
			error_msg("Error in atoi\n", 1);
		}
		st_a[i] = ft_atoi(array[i]);
		i++;
	}
	free(array);
	return(st_a);
}

int	no_duplicates(int *st_a, int len)
{
	int i = 0;
	int *aux;

	aux = (int *)ft_calloc(sizeof(int), len + 1);
	if (!aux)
		return 0;
	aux[len] = '\0';
	while (i < len)
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
	do_checks(st_a, len);
	st_b = (int *)ft_calloc(sizeof(int *), len);
	if (len < 6)
		sort_under_six(st_a, st_b, len);
	free(st_a);
	// if (len == 5)
	// 	sort_five(st_a, st_b, len);

	// while (st_a[i])
	// {
	// 	printf("st_a[%d] = %d\n", i, st_a[i]); // HOX
	// 	i++;
	// }
	return (1);
}

