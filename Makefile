# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 15:12:56 by cybattis          #+#    #+#              #
#    Updated: 2021/11/09 18:20:52 by cybattis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	= 	$(wildcard *.c)
SRCSB	=	$(wildcard *lst*.c)
SRCSM	=	$(filter-out $(SRCSB), $(SRCS))

OBJSM	=	$(SRCSA:.c=.o)
OBJSB	=	$(SRCSB:.c=.o)

DEPS	= 	libft.h

CC		= 	gcc -std=c99
RM		= 	rm -f

CFLAGS	= 	-Wall -Wextra -Werror

%.o: %.c	$(SRCS) $(DEPS)
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJSM)
			ar rcs $(NAME) $(OBJS)
			ranlib $(NAME)

all:		$(NAME)

bonus:		$(OBJSA) $(OBJSB) fclean
			ar -rcs $(NAME) $(OBJSA) $(OBJSB)
			ranlib $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY	=	all clean fclean re bonus
