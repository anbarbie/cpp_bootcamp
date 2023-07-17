# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/08 18:10:05 by antbarbi          #+#    #+#              #
#    Updated: 2023/01/18 13:03:19 by antbarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Found

INCLUDES		= ./
SRCS			= main.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++

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