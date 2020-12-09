# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/08 12:15:11 by timlecou          #+#    #+#              #
#    Updated: 2020/12/09 18:57:21 by timlecou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
SRCS = main.cpp
OBJS = $(SRCS:%.cpp=%.o)
CC = clang++
FLAGS = -Werror -Wextra -Wall -std=c++98

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
