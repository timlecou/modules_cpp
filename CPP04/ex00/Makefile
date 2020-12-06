# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/02 10:48:40 by timlecou          #+#    #+#              #
#    Updated: 2020/12/06 13:51:02 by timlecou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sorcerer
SRCS = Sorcerer.cpp Victim.cpp Peon.cpp Zombie.cpp main.cpp
CC = clang++
FLAGS = -Werror -Wextra -Wall
OBJS = $(SRCS:%.cpp=%.o)

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
