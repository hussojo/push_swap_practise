/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:09:50 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/13 12:18:06 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// modified to find the first space that has no value

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return 0;
	if (dst[len] != '\0')
		len --;
	((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	// else
	// 	ft_memcpy(dst, src, len);
	return (dst);
}
