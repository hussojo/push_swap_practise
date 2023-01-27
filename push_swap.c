/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:49:16 by jhusso            #+#    #+#             */
/*   Updated: 2023/01/27 15:21:19 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//implementation of basic stack function

#include "push_swap.h"

size_t array_len(char *av)
{
	int i;
	size_t count;

	i = 0;
	count = 0;
	while(av[i] != '\0') //&& av[i] != 9)
	{
		if(av[i] != 32)
			count++;
		i++;
	}
	return(count);
}

void set_array(char *av) // with spaces
{
	 char *stack_a;
	size_t len;
	size_t i = 0;

	len = array_len(av);
	printf("%zu\n", len);
	// stack_a = (char *)calloc(len + 1, sizeof(int ));
	stack_a = ft_avdup(av, len);
	while(i <= len)
	{
		printf("%d", atoi(&stack_a[i]));
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 0;

	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			printf("av[1] = %c\n", av[1][i]);
			i++;
		}
		set_array(av[1]);
	}
	return(0);
}
