# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 12:14:02 by aarranz-          #+#    #+#              #
#    Updated: 2025/02/24 12:26:26 by aarranz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC	= 	main		\
		Zombie		\
#		newZombie	\
#		randomChump

SRCS =	$(addsuffix .cpp, $(SRC))
OBJ =	$(SRCS:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re