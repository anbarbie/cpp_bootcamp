# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/11 19:37:41 by antbarbi          #+#    #+#              #
#    Updated: 2022/08/17 17:04:22 by antbarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Abstract
SRCSDIR		= .
OBJSDIR		= objs
INCLUDES	= .
SRCS		= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

SRCS := $(SRCS:%.cpp=srcs/%.cpp)

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -Iinclude

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@$(CC) $(CFLAGS) -o $@ $^

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test