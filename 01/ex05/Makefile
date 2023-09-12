# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/09 14:44:10 by ichaiq            #+#    #+#              #
#    Updated: 2023/09/12 22:36:07 by ichaiq           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Harl
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

SRCS = $(shell find *.cpp -type f)
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CC) $(FLAGS) -c $< -o $@
	
$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re

