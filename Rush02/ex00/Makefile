# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/03 14:34:05 by thgermai          #+#    #+#              #
#    Updated: 2019/09/14 19:50:15 by thgermai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
PATH_SRCS = ./srcs/
SRCS = $(PATH_SRCS)parsing.c\
		$(PATH_SRCS)main.c\
		$(PATH_SRCS)basic_func.c\
		$(PATH_SRCS)convert.c\
		$(PATH_SRCS)create_dictionary.c\

CC = gcc
CFLAGS = -Wall -Wextra -Werror
FFLAGS = -g3 -fsanitize=address

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fflag : $(SRCS)
	$(CC) $(FFLAGS) $(CFLAGS) $(SRCS) -o $(NAME)

clean :

fclean : clean
	rm -rf $(NAME)
	rm -rf rush-02.dSYM

re : fclean all
