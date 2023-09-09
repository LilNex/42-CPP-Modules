# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 13:09:42 by ichaiq            #+#    #+#              #
#    Updated: 2023/09/09 13:58:16 by ichaiq           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= sed
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
RM		= rm -rf

SRCS = $(shell find *.cpp -type f)

.PHONY: all clean re

run: re
	./$(NAME) Makefile cpp c++ cppcpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all