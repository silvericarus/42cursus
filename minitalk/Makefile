# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/01 17:48:39 by albgonza          #+#    #+#              #
#    Updated: 2022/09/08 18:15:42 by albgonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_S	= server
NAME_C	= client
NAME_SB = server_bonus
NAME_CB	= client_bonus
LIBFT	= libft
LFLAGS	= libft/libft.a
SRC_SERVER	:= server.c
SRC_CLIENT	:= client.c
SRC_SERVER_BONUS := server_bonus.c
SRC_CLIENT_BONUS := client_bonus.c

OBJS_C	:= $(SRC_CLIENT:.c=.o)
OBJS_S	:= $(SRC_SERVER:.c=.o)

OBJS_C_B := $(SRC_CLIENT_BONUS:.c=.o)
OBJS_S_B := $(SRC_SERVER_BONUS:.c=.o)

CC	= gcc
CFLAGS	= -Wall -Werror -Wextra
RM	= rm -rf
COLOR_DONE = \033[47m\033[1;32m
COLOR_NONE = \033[0m

all: $(LFLAGS) $(NAME_C) $(NAME_S) 

$(LFLAGS):
	@$(MAKE) -C $(LIBFT) all
	@echo "$(COLOR_DONE)<!---LIBFT-COMPILED--->$(COLOR_NONE)\n"

$(NAME_C) : $(OBJS_C) $(LIBFT)
	$(CC) $(CFLAGS) $(LFLAGS) $(OBJS_C) $(LFLAGS) -o $(NAME_C)
	@echo "$(COLOR_DONE)<!---CLIENT-COMPILED--->$(COLOR_NONE)\n"
	

$(NAME_S) : $(OBJS_S) $(LIBFT)
	$(CC) $(CFLAGS) $(LFLAGS) $(OBJS_S) $(LFLAGS) -o $(NAME_S)
	@echo "$(COLOR_DONE)<!---SERVER-COMPILED--->$(COLOR_NONE)\n"

$(NAME_CB) : $(OBJS_C_B) $(LIBFT)
	$(CC) $(CFLAGS) $(LFLAGS) $(OBJS_C_B) $(LFLAGS) -o $(NAME_CB)
	@echo "$(COLOR_DONE)<!---CLIENT-BONUS-COMPILED--->$(COLOR_NONE)\n"
	

$(NAME_SB) : $(OBJS_S_B) $(LIBFT)
	$(CC) $(CFLAGS) $(LFLAGS) $(OBJS_S_B) $(LFLAGS) -o $(NAME_SB)
	@echo "$(COLOR_DONE)<!---SERVER-BONUS-COMPILED--->$(COLOR_NONE)\n"

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

bonus: $(LFLAGS) $(NAME_CB) $(NAME_SB)

clean:
	$(RM) $(OBJS_C) $(OBJS_S) $(OBJS_C_B) $(OBJS_S_B)
	$(MAKE) -C $(LIBFT) clean
	@echo "$(COLOR_DONE)<!---EVERYTHING-HAS-BEEN-CLEANED--->$(COLOR_NONE)\n"

fclean: clean
	$(RM) $(NAME_C) $(NAME_S) $(NAME_CB) $(NAME_SB)
	$(MAKE) -C $(LIBFT) fclean
	@echo "$(COLOR_DONE)<!---EVERYTHING-HAS-BEEN-CLEANED, INCLUDING THE OBJECTS--->$(COLOR_NONE)\n"

re: fclean all


.PHONY: all bonus clean fclean re
