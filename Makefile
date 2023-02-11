# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 15:49:29 by jhusso            #+#    #+#              #
#    Updated: 2023/02/11 16:44:35 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftpushswap.a
CC = cc
RM = rm -f
BUILD_FLAGS = -Wall -Wextra -Werror
LIBFT = ./libft
INCLUDE = ./libft/libft.h

SRC =	push_swap.c work_stack.c push_swap_utils.c

OBJ = $(SRC:.c=.o)

H_FILES = push_swap.h

all: $(NAME)

$(NAME): $(SRC)
	make -C ./libft/ all
	mv ./libft/libft.a ./$(NAME)
	$(CC) -c $(BUILD_FLAGS) $(SRC) -I $(INCLUDE) -g
	ar rus $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	cd $(LIBFT) && $(MAKE) clean -libft

fclean: clean
	$(RM) $(NAME)
	cd $(LIBFT) && $(MAKE) fclean

re: fclean all


.PHONY: all clean fclean re $(LIBFT)
