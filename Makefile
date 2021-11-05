# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 15:12:56 by cybattis          #+#    #+#              #
#    Updated: 2021/11/05 14:57:22 by cybattis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	= 	$(wildcard *.c)
OBJS	= 	$(SRCS:.c=.o)
DEPS	= 	libft.h

CC		= 	gcc -std=c99
RM		= 	rm -f

CFLAGS	= 	-Wall -Wextra -Werror -I.

%.o: %.c	$(SRCS) $(DEPS)
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)
			ranlib $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY	=	all clean fclean re
