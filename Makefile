# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 15:12:56 by cybattis          #+#    #+#              #
#    Updated: 2021/11/10 18:40:47 by cybattis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=							\
			ft_atoi.c				\
			ft_bzero.c				\
			ft_calloc.c				\
			ft_isalnum.c			\
			ft_isalpha.c			\
			ft_isascii.c			\
			ft_isdigit.c			\
			ft_isprint.c			\
			ft_itoa.c				\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_memcpy.c				\
			ft_memmove.c			\
			ft_memset.c				\
			ft_putchar_fd.c			\
			ft_putendl_fd.c			\
			ft_putnbr_fd.c			\
			ft_putstr_fd.c			\
			ft_split.c				\
			ft_strchr.c				\
			ft_strdup.c				\
			ft_striteri.c			\
			ft_strjoin.c			\
			ft_strlcat.c			\
			ft_strlcpy.c			\
			ft_strlen.c				\
			ft_strmapi.c			\
			ft_strncmp.c			\
			ft_strnstr.c			\
			ft_strrchr.c			\
			ft_strtrim.c			\
			ft_substr.c				\
			ft_tolower.c			\
			ft_toupper.c			\

SRCSB	=							\
			ft_lstadd_back.c		\
			ft_lstadd_front.c		\
			ft_lstclear.c			\
			ft_lstdelone.c			\
			ft_lstiter.c			\
			ft_lstlast.c			\
			ft_lstmap.c				\
			ft_lstnew.c				\
			ft_lstsize.c			\

OBJS	=	$(SRCS:.c=.o)
OBJSB	=	$(SRCSB:.c=.o)

DEPS	= 	libft.h

CC		= 	gcc -std=c99
RM		= 	rm -f

CFLAGS	= 	-Wall -Wextra -Werror

%.o:		%.c $(DEPS)
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)
			ranlib $(NAME)

all:		$(NAME)

bonus:		$(OBJS) $(OBJSB)
			ar rcs $(NAME) $(OBJS) $(OBJSB)
			ranlib $(NAME)

clean:
			$(RM) $(OBJS) $(OBJSB)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY	=	all clean fclean re bonus
