# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 15:12:56 by cybattis          #+#    #+#              #
#    Updated: 2021/11/13 15:31:29 by cybattis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libft.a

SRCDIR	=		src
BLDDIR	=		obj

SRCS	=		$(SRCDIR)/ft_atoi.c				$(SRCDIR)/ft_bzero.c			\
				$(SRCDIR)/ft_calloc.c			$(SRCDIR)/ft_isalnum.c			\
				$(SRCDIR)/ft_isalpha.c			$(SRCDIR)/ft_isascii.c			\
				$(SRCDIR)/ft_isdigit.c			$(SRCDIR)/ft_isprint.c			\
				$(SRCDIR)/ft_itoa.c				$(SRCDIR)/ft_memchr.c			\
				$(SRCDIR)/ft_memcmp.c			$(SRCDIR)/ft_memcpy.c			\
				$(SRCDIR)/ft_memmove.c			$(SRCDIR)/ft_memset.c			\
				$(SRCDIR)/ft_putchar_fd.c		$(SRCDIR)/ft_putendl_fd.c		\
				$(SRCDIR)/ft_putnbr_fd.c		$(SRCDIR)/ft_putstr_fd.c		\
				$(SRCDIR)/ft_split.c			$(SRCDIR)/ft_strchr.c			\
				$(SRCDIR)/ft_strdup.c			$(SRCDIR)/ft_striteri.c			\
				$(SRCDIR)/ft_strjoin.c			$(SRCDIR)/ft_strlcat.c			\
				$(SRCDIR)/ft_strlcpy.c			$(SRCDIR)/ft_strlen.c			\
				$(SRCDIR)/ft_strmapi.c			$(SRCDIR)/ft_strncmp.c			\
				$(SRCDIR)/ft_strnstr.c			$(SRCDIR)/ft_strrchr.c			\
				$(SRCDIR)/ft_strtrim.c			$(SRCDIR)/ft_substr.c			\
				$(SRCDIR)/ft_tolower.c			$(SRCDIR)/ft_toupper.c			\
				$(SRCDIR)/ft_lstadd_back.c		$(SRCDIR)/ft_lstadd_front.c		\
				$(SRCDIR)/ft_lstclear.c			$(SRCDIR)/ft_lstdelone.c		\
				$(SRCDIR)/ft_lstiter.c			$(SRCDIR)/ft_lstlast.c			\
				$(SRCDIR)/ft_lstmap.c			$(SRCDIR)/ft_lstnew.c			\
				$(SRCDIR)/ft_lstsize.c			$(SRCDIR)/ft_isspace.c			\
				$(SRCDIR)/ft_putchar.c			$(SRCDIR)/ft_puts.c				\
				$(SRCDIR)/ft_putnbr.c			$(SRCDIR)/ft_putstr.c			\
				$(SRCDIR)/ft_strrev.c			$(SRCDIR)/ft_strnrev.c			\

OBJS	=		$(SRCS:$(SRCDIR)/%.c=$(BLDDIR)/%.o)
DEPS	=		$(INCL)/libft.h

CC		= 		gcc -std=c99
INCL	=		include
CFLAGS	=		-Wall -Wextra -Werror -I$(INCL)

$(BLDDIR)/%.o:	$(SRCDIR)/%.c $(DEPS)
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)
				ranlib $(NAME)

all:			directory $(NAME)

clean:
				$(RM) -r $(BLDDIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

directory:
				${MKDIR_P} ${BLDDIR}

.PHONY	=		all clean fclean re directory

RM		= 		rm -f
MKDIR_P = 		mkdir -p
