# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/28 19:27:05 by vvoytenk          #+#    #+#              #
#    Updated: 2018/11/28 19:27:06 by vvoytenk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AbstractVM
SRC = main.cpp \
	Factory.cpp \
	Parser.cpp \
	Lexer.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	clang++ $(FLAGS) -o $@ -c $<

clean:
	rm	-rf $(OBJ)

fclean: clean
	rm	-rf $(NAME)

re: fclean all
