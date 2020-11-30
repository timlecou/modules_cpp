# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/29 18:58:10 by timlecou          #+#    #+#              #
#    Updated: 2020/11/30 11:08:15 by timlecou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCS = main.cpp ft_replace.cpp

OBJS = $(SRCS:%.cpp=%.o)

CC = clang++

FLAGS = -Wall -Wextra -Werror

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
