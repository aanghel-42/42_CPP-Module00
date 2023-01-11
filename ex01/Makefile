# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 15:57:19 by aanghel           #+#    #+#              #
#    Updated: 2023/01/11 03:08:49 by aanghel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = src/*.cpp

FLAGS = g++ -Wall -Werror -Wextra -std=c++98

OBJS = $(SRCS=.cpp=.o)

all: $(NAME)

$(NAME) : $(SRCS)
	@$(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re