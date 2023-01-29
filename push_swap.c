/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:49:16 by jhusso            #+#    #+#             */
/*   Updated: 2023/01/29 18:47:39 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//implementation of basic stack function

#include "push_swap.h"

char **ft_one_arg(char *av, char **st_a)
{
	st_a = ft_split(av, 32);
	return(st_a);
}

// char **ft_many_args(char *av, int ac, char **st_a)
// {
// 	static int aux = 0;
// 	st_a = (char **)malloc(sizeof(char *) * ac);
// 	if(!st_a)
// 		return NULL;
// 	st_a[ac] = 0;
// 	st_a[aux] = ft_strdup(av);
// 	printf("st_a[0] = %s\n", st_a[0]);
// 	printf("st_a[1] = %s\n", st_a[1]);
// 	aux = aux +1;
// 	return(st_a);
// }

int main(int ac, char **av)
{
	static char **st_a;
	// if(ac < 2)
		//write(1, "error", 6);
	st_a  = 0;
	if(ac == 2)
	{
		st_a = ft_one_arg(av[1], st_a);
	}
	if(ac > 2)
	{
		int i;
		int j;

		st_a = (char **)malloc(sizeof(char *) * ac);
		if(!st_a)
			printf("no stack allocated");

		i = 1;
		j = 0;
		while(i < ac)
		{
			st_a[j] = ft_strdup(av[i]);
			printf("st_a in main[%d] = %s\n", j, st_a[j]);
			i++;
			j++;
		}
		st_a[ac] = 0;
	}
	return(0);
}
