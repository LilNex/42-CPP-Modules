# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 13:09:42 by ichaiq            #+#    #+#              #
#    Updated: 2023/09/14 21:40:03 by ichaiq           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= Fixed
	
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