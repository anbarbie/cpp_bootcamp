# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 16:14:45 by antbarbi          #+#    #+#              #
#    Updated: 2022/07/14 15:50:17 by antbarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= MyAwesomePhoneBook
SRCSDIR		= .
OBJSDIR		= objs
INCLUDES	= *.hpp
SRCS		= main.cpp PhoneBook.cpp Contact.cpp

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