# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 22:50:31 by timlecou          #+#    #+#              #
#    Updated: 2020/12/01 13:19:08 by timlecou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = frag
SRCS = FragTrap.cpp ScavTrap.cpp ClapTrap.cpp main.cpp
OBJS = $(SRCS:%.cpp=%.o)
CC = clang++
FLAGS = -Werror -Wextra -Wall

%.o: %.cpp
	$(CC) -c $(FLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
