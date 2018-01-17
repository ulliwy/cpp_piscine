# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/08 14:57:28 by iprokofy          #+#    #+#              #
#    Updated: 2018/01/16 22:01:16 by Ulliwy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp
NAME = dynamic
FLAGS = -Wall -Wextra -Werror -O3

all: $(NAME)

$(NAME): $(SRC)
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(SRC:.cpp=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all
