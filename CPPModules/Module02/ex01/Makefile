# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 23:02:36 by albgonza          #+#    #+#              #
#    Updated: 2023/06/27 23:02:36 by albgonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		=	\
			Fixed.cpp \
			Fixed.hpp \
			main.cpp \

OBJS		=	$(SRCS:.cpp=.o)
NAME		=	ft_fixed_numbers_v2
CC			=	g++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -f

all: $(NAME)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@
		
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) *.o -o $(NAME)

clean:
		$(RM) *.o

fclean: clean
		$(RM) $(NAME)

re: fclean all
