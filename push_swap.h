/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:41:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/11 14:52:18 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h> // write
# include <stdlib.h> // NULL, exit failure & success, calloc
# include <stdio.h>
# include <stdbool.h> // boolean values

# include "libft/libft.h"

// push_swap.c
int			main(int ac, char **av);
// static char	**ft_one_arg(char **av, char **array);
// static char	**ft_many_args(char **av, int ac, char **array);

// push_swap_utils.c
int			*work_stack(char **array);
// int			check_num(int *st_a);
int			no_duplicates(int *st_a, int len);
int			av_count(char **array);
int			*allocate_n_fill_stack(char **array);

#endif
