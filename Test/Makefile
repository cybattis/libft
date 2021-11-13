# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 15:08:31 by cybattis          #+#    #+#              #
#    Updated: 2021/11/13 15:22:17 by cybattis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	tester

SRCS	=	*.c

CC		= 	gcc -std=c99
CFLAGS	=	-Wall -Wextra -Werror

$(NAME):
			$(CC) $(CFLAGS) $(SRCS) -L../ -lft -o $(NAME)
			./tester

all:		$(NAME)

clean:
			$(RM) $(NAME)

fclean:
			$(RM) $(NAME)

re:			fclean all

.PHONY	=	all clean fclean re
