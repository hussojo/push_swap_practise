/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:49:16 by jhusso            #+#    #+#             */
/*   Updated: 2023/01/27 11:26:30 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//implementation of basic stack function

#include "push_swap.h"

// works with "1 2 3 4" type of argument

// int	ft_atoi(const char *nptr)
// {
// 	int		sign;
// 	long	res;

// 	sign = 1;
// 	res = 0;
// 	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
// 		nptr++;
// 	if (*nptr == '-')
// 		sign *= -1;
// 	if (*nptr == '+' || *nptr == '-')
// 		nptr++;
// 	while (*nptr >= '0' && *nptr <= '9')
// 	{
// 		res = res * 10 + *nptr - '0';
// 		nptr++;
// 		if (res > 2147483647 && sign == 1)
// 			return (-1);
// 		else if (res < -2147483648 && sign != 1)
// 			return (0);
// 	}
// 	return ((int)res * sign);
// }

int array_len(char *argv)
{
	int i;

	i = 0;
	while(argv[i])
		i++;
	return(i);;
}

void set_array(char *av) // with spaces
{
	int *stack_a;
	int len;

	len = array_len(av);
	stack_a = (int *)calloc(len + 1, sizeof(int ));
	ft_strcpy(stack_a, av);
}

int main(int ac, char **av)
{
	if(ac == 2)
		//while(argv[i])
		set_array(av[1]);
	return(0);
}
