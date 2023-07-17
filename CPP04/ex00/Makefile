# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/11 19:37:41 by antbarbi          #+#    #+#              #
#    Updated: 2022/08/30 15:50:13 by antbarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Polymorph
SRCSDIR		= .
OBJSDIR		= objs
INCLUDES	= .
SRCS		= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

SRCS := $(SRCS:%.cpp=srcs/%.cpp)

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -Iinclude

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@$(CXX) $(CXXFLAGS) -o $@ $^

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re