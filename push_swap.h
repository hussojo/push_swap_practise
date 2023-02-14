/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:41:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/14 10:01:58 by jhusso           ###   ########.fr       */
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
int		ready_sorted(int *st_a, int len);
int		*mini_sort(int *aux, int len);

// work_stack.c
int		av_count(char **array);
void	do_checks(int *st_a, int len);
int		*allocate_n_fill_stack(char **array);
int		no_duplicates(int *st_a, int len);
int		work_stack(char **array);

// sort_under_six.c
void	sort_three(int *st_a, int len);
// void	sort_four(int *st_a, int *st_b, int len);
// int		find_min(char *st_a);

// op_swap.c
void	ft_op_sa(int *st_a);

// op_rotate.c
void	ft_op_ra(int *st_a);

// op_rev_rotate
void	ft_op_rra(int *st_a);

// op_push.c
int		ft_op_pb(int st_a, int *st_b);

#endif
