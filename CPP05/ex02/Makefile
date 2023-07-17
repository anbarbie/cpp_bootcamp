# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 13:26:21 by antbarbi          #+#    #+#              #
#    Updated: 2022/10/06 12:39:16 by antbarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= But
SRCSDIR		= .
OBJSDIR		= objs
INCLUDES	= .
SRCS		= main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

SRCS := $(SRCS:%.cpp=srcs/%.cpp)

CXX			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -Iinclude

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@$(CXX) $(CFLAGS) -o $@ $^

clean:
	rm -f *_shrubbery

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test