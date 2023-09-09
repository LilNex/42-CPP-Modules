# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lilnex <lilnex@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 13:09:42 by ichaiq            #+#    #+#              #
#    Updated: 2023/09/08 03:03:20 by lilnex           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= account
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -g
RM		= rm -rf

SRCS = $(shell find *.cpp -type f)

.PHONY: all clean re

run: re
	./$(NAME)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all