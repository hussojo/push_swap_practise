/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:41:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/01/27 15:13:38 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h> // write
# include <stdlib.h> // NULL, exit failure & success
# include <stdio.h>

# include "libft/libft.h"

void		set_array(char *argv);
size_t		array_len(char *argv);
int			main(int ac, char **av);
char		*ft_nbrcpy(char *dst, const char *src);
char		*ft_nbrlcpy(char *dst, const char *src, size_t dstsize);
char		*ft_avdup(const char *s, size_t len);





#endif
