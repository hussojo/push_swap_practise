/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:41:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/13 12:18:11 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h> // write
# include <stdlib.h> // NULL, exit failure & success, ft_calloc
# include <stdio.h>
# include <stdbool.h> // boolean values

# include "libft_push_swap/libft.h"

// push_swap.c
char	**ft_one_arg(char **av, char **array);
char	**ft_many_args(char **av, int ac, char **array);
int		main(int ac, char **av);

// push_swap_utils.c
void	error_msg(char *msg, int flag);
int		*mini_sort(int *aux, int len);

// work_stack.c
int		ready_sorted(int *st_a, int len);
int		av_count(char **array);
int		*allocate_n_fill_stack(char **array);
int		no_duplicates(int *st_a, int len);
int		work_stack(char **array);

// sort_three.c
void	sort_three(int *st_a, int len);

// op_swap.c
int		*ft_op_sa(int *st_a);

// op_rotate.c
int		*ft_op_ra(int *st_a, int len);

// op_rev_rotate
int		*ft_op_rra(int *st_a, int len);

// op_push.c
int		*ft_op_pb(int st_a, int *st_b, int len);

#endif
