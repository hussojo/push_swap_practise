/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:41:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/06 13:57:57 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h> // write
# include <stdlib.h> // NULL, exit failure & success, calloc
# include <stdio.h>
# include <stdbool.h> // boolean values

# include "libft/libft.h"

int			main(int ac, char **av);
// static char	**ft_one_arg(char **av, char **st_a);
// static char	**ft_many_args(char **av, int ac, char **st_a);
int			ft_check_ac(char **st_a);
int			no_duplicates(char **st_a);

#endif
