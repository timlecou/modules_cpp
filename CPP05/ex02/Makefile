# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/06 15:35:04 by timlecou          #+#    #+#              #
#    Updated: 2020/12/07 12:30:33 by timlecou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat
SRCS = Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp PresidentialPardonForm.cpp main.cpp
CC = clang++
FLAGS = -Werror -Wall -Wextra
OBJS = $(SRCS:%.cpp=%.o)

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
