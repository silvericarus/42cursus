# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 23:02:36 by albgonza          #+#    #+#              #
#    Updated: 2023/08/08 18:04:37 by albgonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		=	\
			Animal.hpp \
			Animal.cpp \
			Dog.hpp \
			Dog.cpp \
			Cat.hpp \
			Cat.cpp \
			WrongCat.hpp \
			WrongCat.cpp \
			WrongAnimal.hpp \
			WrongAnimal.cpp \
			Brain.hpp \
			Brain.cpp \
			main.cpp \

OBJS		=	$(SRCS:.cpp=.o)
NAME		=	ft_abstractanimals
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
