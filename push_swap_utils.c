/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:16:28 by jhusso            #+#    #+#             */
/*   Updated: 2023/01/27 15:18:04 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_nbrcpy(char *dst, const char *src)
{
	char	*start;

	start = dst;
	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (start);
}

char	*ft_nbrlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;
	char *res = 0;

	slen = ft_strlen(src);
	if (!dstsize)
		return (0);
	*res = *dst;
	while (dstsize - 1 > 0 && *src)
	{
		*dst = *(char *)src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (res);
}

char	*ft_avdup(const char *s, size_t len)
{
	char	*dup;

	dup = (char *)malloc(sizeof (char) * len + 1);
	if (!dup)
		return (NULL);
	ft_nbrlcpy(dup, s, len);
	return (dup);
}
