/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:30:43 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/13 09:23:03 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// modified to return 0 in case of overflow and numbers starting with 0 ex. 089
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	res;

	sign = 1;
	res = 0;
	if (*nptr == '0')
		return (0);
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
			return (0);
		else if (res < -2147483648 && sign != 1)
			return (0);
	}
	res = res * sign;
	return ((int)res);
}
