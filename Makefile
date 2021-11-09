# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 15:12:56 by cybattis          #+#    #+#              #
#    Updated: 2021/11/09 19:30:49 by cybattis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	= 	$(wildcard *.c)
SRCSM	=	$(filter-out $(SRCSB), $(SRCS))
SRCSB	=	$(wildcard *lst*.c)

OBJSM	=	$(SRCSM:.c=.o)
OBJSB	=	$(SRCSB:.c=.o)

DEPS	= 	libft.h

CC		= 	gcc -std=c99
RM		= 	rm -f

CFLAGS	= 	-Wall -Wextra -Werror

%.o: %.c	$(SRCS) $(DEPS)
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJSM)
			ar rcs $(NAME) $(OBJSM)
			ranlib $(NAME)

all:		$(NAME)

bonus:		$(OBJSM) $(OBJSB)
			rm -f $(NAME)
			ar -rcs $(NAME) $(OBJSM) $(OBJSB)
			ranlib $(NAME)

clean:
			$(RM) $(OBJSM) $(OBJSB)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY	=	all clean fclean re bonus
