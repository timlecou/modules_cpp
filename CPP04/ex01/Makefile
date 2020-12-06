# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/02 15:04:33 by timlecou          #+#    #+#              #
#    Updated: 2020/12/06 13:21:29 by timlecou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon
SRCS = AWeapon.cpp PlasmaRifle.cpp PowerFist.cpp\
		Enemy.cpp SuperMutant.cpp RadScorpion.cpp\
		DesertEagle.cpp Character.cpp BigZombie.cpp main.cpp
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
