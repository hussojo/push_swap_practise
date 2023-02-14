# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 15:49:29 by jhusso            #+#    #+#              #
#    Updated: 2023/02/14 17:03:42 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftpushswap.a
CC = cc
RM = rm -f
BUILD_FLAGS = -Wall -Wextra -Werror
LIBFT = ./libft_push_swap
INCLUDE = ./libft_push_swap/libft.h

SRC =	push_swap.c work_stack.c push_swap_utils.c sort_under_six.c op_swap.c \
		 op_rotate.c op_rev_rotate.c op_push.c

OBJ = $(SRC:.c=.o)

H_FILES = push_swap.h

all: $(NAME)

$(NAME): $(SRC)
	make -C ./libft_push_swap/ all
	mv ./libft_push_swap/libft.a ./$(NAME)
	$(CC) -c $(BUILD_FLAGS) $(SRC) -I $(INCLUDE) -g
	ar rus $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	cd $(LIBFT) && $(MAKE) clean -libft_push_swap

fclean: clean
	$(RM) $(NAME)
	cd $(LIBFT) && $(MAKE) fclean

re: fclean all


.PHONY: all clean fclean re $(LIBFT)
