# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/11 19:37:41 by antbarbi          #+#    #+#              #
#    Updated: 2022/08/18 17:41:20 by antbarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Interface
SRCSDIR		= .
OBJSDIR		= objs
INCLUDES	= .
SRCS		= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

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