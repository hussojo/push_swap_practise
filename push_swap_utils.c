/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josefinahusso <josefinahusso@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:16:28 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/10 15:48:34 by josefinahus      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int av_count(char **st_a)
{
	int count;

	count = 0;
	while (st_a[count])
		count++;
	printf("av_count:%d\n", count);
	return(count);
}

int	is_int(char **st_a)
{
	int i;
	i = 0;
	while (st_a[i])
	{
		if (ft_atoi(st_a[i]) == 0)
		{
			printf("atoi return:%d", ft_atoi(st_a[i]));
			printf("error\n");
		}
		i++;
	}
	return (0);
}

int	no_duplicates(char **st_a)
{
	int	i;
	int j;
	int len;

	len = av_count(st_a);
	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len) //arglen
		{
			if (ft_atoi(st_a[i]) == ft_atoi(st_a[j]))
				return (false); //duplicate found
			j++;
		}
		i++;
	}
	return (true); // no duplicates
}

int	ft_check_ac(char **st_a)
{
	int a = 0;
	int b = 0;
	b = is_int(st_a);
	a = no_duplicates(st_a);
	if (a == 0) // means yes dublicates
	{
		free(st_a);
		printf("FAILURE\n");
		exit(1);
	}
	// if (is_int(st_a) == 1)
	// {
	// 	free(st_a);
	// 	printf("FAILURE\n");
	// 	exit(EXIT_FAILURE);
	// }
	return (0); //success
}
