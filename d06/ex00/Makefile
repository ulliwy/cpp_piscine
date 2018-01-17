# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/08 14:57:28 by iprokofy          #+#    #+#              #
#    Updated: 2018/01/16 15:22:01 by iprokofy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = *.cpp
NAME = convert
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(SRC:.cpp=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all
