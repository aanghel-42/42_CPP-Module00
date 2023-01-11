# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 02:40:42 by aanghel           #+#    #+#              #
#    Updated: 2023/01/11 03:08:54 by aanghel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= account

SRC= account.cpp \
	 test.cpp \

FLAGS = g++ -Wall -Werror -Wextra -std=c++98

OBJS = $(SRCS=.cpp=.o)

all: $(NAME)

$(NAME) : $(SRC)
	@$(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re