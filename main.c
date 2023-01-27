/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:41:01 by jhusso            #+#    #+#             */
/*   Updated: 2023/01/27 09:38:33 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // NULL, exit failure & success
#include <stdio.h>

// works with "1 2 3 4" type of argument

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	res;

	sign = 1;
	res = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
		sign *= -1;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + *nptr - '0';
		nptr++;
		if (res > 2147483647 && sign == 1)
			return (-1);
		else if (res < -2147483648 && sign != 1)
			return (0);
	}
	return ((int)res * sign);
}

int array_len(char *argv)
{
	int i;

	i = 0;
	while(argv[i])
		i++;
	return(i);;
}

void set_array(char *argv) // with spaces
{
	
}

int main(int argc, char *argv[])
{
	if(argc == 2)
		//while(argv[i])
		set_array(argv[1]);
	return(0);
}
