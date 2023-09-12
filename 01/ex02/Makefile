# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 13:09:42 by ichaiq            #+#    #+#              #
#    Updated: 2023/09/12 22:35:25 by ichaiq           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= thisisbrain

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

