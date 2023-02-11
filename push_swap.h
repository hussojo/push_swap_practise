/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:41:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/11 10:18:50 by jhusso           ###   ########.fr       */
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
int			**ft_check_ac(char **array);
int			is_int(char **array);
int			no_duplicates(char **array);
int			av_count(char **array);
int			**allocate_stack(char **array, int **st_a);

#endif
