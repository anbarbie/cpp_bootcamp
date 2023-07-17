# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 15:36:07 by antbarbi          #+#    #+#              #
#    Updated: 2022/07/19 18:07:54 by antbarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Account
SRCSDIR		= .
OBJSDIR		= objs
INCLUDES	= *.hpp
SRCS		= Account.cpp tests.cpp

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@$(CC) $(CFLAGS) -o $@ $^

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test