# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 01:13:47 by ichaiq            #+#    #+#              #
#    Updated: 2023/10/02 00:53:39 by ichaiq           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= ClapTrap
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
RM		= rm -rf

SRCS = $(shell find *.cpp -type f)
HDRS = $(shell find *.hpp -type f)

.PHONY: all clean re

all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all