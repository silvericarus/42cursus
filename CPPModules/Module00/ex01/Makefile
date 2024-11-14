# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/16 18:51:13 by albgonza          #+#    #+#              #
#    Updated: 2023/09/20 20:34:48 by albgonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		=	\
			Contact.hpp \
			Contact.cpp \
			PhoneBook.hpp \
			PhoneBook.cpp \
			ft_phone.cpp \

OBJS_A		=	$(SRCS:.cpp=.o)
OBJS		=	$(filter-out %.hpp,$(OBJS_A))
NAME		=	ft_phone
CC			=	g++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -f

all: $(NAME)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@
		
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) *.o

fclean: clean
		$(RM) $(NAME)

re: fclean clean all
