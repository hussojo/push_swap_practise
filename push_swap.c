/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:49:16 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/11 10:47:03 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**ft_one_arg(char **av, char **array)
{
	array = ft_split(av[1], 32);
	return (array);
}

static char	**ft_many_args(char **av, int ac, char **array)
{
	int	i;
	int	j;
	//int	size;

	i = 1;
	j = 0;
	array = (char **)calloc(sizeof(char *), ac);
	if (!array)
		return (NULL);
	while (i < ac)
	{
		//size = ft_strlen(av[i]);
		array[j] = ft_strdup(av[i]);
		i++;
		j++;
	}
	return (array);
}

int	main(int ac, char **av)
{
	static char	**array;
	int			i;
	// if(ac < 2)
		//write(1, "error", 6);
	array = 0;
	i = 0;
	if (ac == 2)
	{
		array = ft_one_arg(av, array);
	}
	if (ac > 2)
	{
		array = ft_many_args(av, ac, array);
	}
	ft_check_ac(array);
	return (0);
}
