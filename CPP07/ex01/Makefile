# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 16:43:11 by antbarbi          #+#    #+#              #
#    Updated: 2022/11/25 15:45:26 by antbarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Iter

INCLUDES		= ./
SRCS			= main.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -I$(INCLUDES)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)


.PHONY:	all clean fclean re