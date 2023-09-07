# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 13:09:42 by ichaiq            #+#    #+#              #
#    Updated: 2023/09/07 12:18:40 by ichaiq           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= phonebook
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -g
RM		= rm -rf

SRCS = main.cpp PhoneBook.cpp Contact.cpp

.PHONY: all clean re

run: re
	./phonebook

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all