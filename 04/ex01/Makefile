# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 18:32:30 by ichaiq            #+#    #+#              #
#    Updated: 2023/10/09 16:48:55 by ichaiq           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= Poly
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
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