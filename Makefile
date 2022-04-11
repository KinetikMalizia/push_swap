# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 13:19:15 by jcarlen           #+#    #+#              #
#    Updated: 2022/04/11 15:52:58 by fmalizia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = push_swap
SRC = push_swap.c \
	push_swap_utils.c

LIBFT = ./libft/

OBJS = $(SRC:.c=.o)

all : libft $(NAME)

bonus : libft $(SERVER_BONUS) $(CLIENT_BONUS)

libft:
		@ $(MAKE) bonus libft.a -C $(LIBFT)

$(NAME) : $(OBJS)
		$(CC) $(OBJS) -L$(LIBFT) -lft -o $(NAME)

%.o : %.c
		$(CC) $(FLAGS) $< -c

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

reset: fclean 
		@ $(MAKE) fclean -C $(LIBFT)

re: fclean all

.PHONY: all clean fclean re libft reset bonus