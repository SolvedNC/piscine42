# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smira <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/18 17:48:05 by smira             #+#    #+#              #
#    Updated: 2019/09/19 14:40:25 by smira            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = ./srcs/ft_atoi.c  ./srcs/ft_doop.c  ./srcs/ft_operations.c  ./srcs/ft_putchar.c  ./srcs/ft_putnbr.c  ./srcs/ft_putstr.c  ./srcs/main.c

INCLUDES = ./includes/ft.h

OBJS    = ./*.o

RM      = rm -f

FLAGS  = -Wall -Wextra -Werror -I${INCLUDES}

all:
	@	gcc ${FLAGS} -c ${SRCS}
	@	gcc ${FLAGS} -o do-op ${SRCS}

clean:
		             @   ${RM} ${OBJS}

fclean:     clean
		              @  ${RM} do-op

re:         fclean all

.PHONY:     all clean fclean re
