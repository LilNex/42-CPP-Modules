# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 13:09:46 by ichaiq            #+#    #+#              #
#    Updated: 2023/09/06 16:40:01 by ichaiq           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= megaphone
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

SRCS = megaphone.cpp

.PHONY: all clean re

all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(FLAGS) $< -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all