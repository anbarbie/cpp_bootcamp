# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 13:43:39 by antbarbi          #+#    #+#              #
#    Updated: 2022/07/11 14:07:49 by antbarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
SRCSDIR		= .
OBJSDIR		= objs
INCLUDES	= .
SRCS		= megaphone.cpp

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