/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josefinahusso <josefinahusso@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:49:16 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/10 15:42:25 by josefinahus      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**ft_one_arg(char **av, char **st_a)
{
	st_a = ft_split(av[1], 32);
	return (st_a);
}

static char	**ft_many_args(char **av, int ac, char **st_a)
{
	int	i;
	int	j;
	//int	size;

	i = 1;
	j = 0;
	st_a = (char **)calloc(sizeof(char *), ac);
	if (!st_a)
		return (NULL);
	while (i < ac)
	{
		//size = ft_strlen(av[i]);
		st_a[j] = ft_strdup(av[i]);
		i++;
		j++;
	}
	return (st_a);
}

int	main(int ac, char **av)
{
	static char	**st_a;
	int			i;
	// if(ac < 2)
		//write(1, "error", 6);
	st_a = 0;
	i = 0;
	if (ac == 2)
	{
		st_a = ft_one_arg(av, st_a);
	}
	if (ac > 2)
	{
		st_a = ft_many_args(av, ac, st_a);
	}
	ft_check_ac(st_a);
	while (st_a[i])
	{
		printf("st_a[%d] = %s\n", i, st_a[i]);
		i++;
	}
	return (0);
}
