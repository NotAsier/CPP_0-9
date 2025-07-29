# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#              #
#    Updated: 2025/07/29 23:17:41 by aarranz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Intern
SRCS = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
.PHONY: all clean fclean re

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(OBJS)
	$(CC) $(CFLAGS)  -o $(NAME) $(OBJS)