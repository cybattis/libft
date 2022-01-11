# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 16:51:12 by cybattis          #+#    #+#              #
#    Updated: 2022/01/11 14:10:55 by cybattis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	libft.a
NAMED 		=	libft_d.a

# Config
# ****************************************************************************

SHELL 		=	/bin/bash
CC 			=	gcc
INCLUDE		=	includes

CFLAGS		=	-Wall -Werror -Wextra -O2 -MMD $(HDFLAGS)
DBFLAGS		=	$(CFLAGS) -g3 -fsanitize=address
HDFLAGS		=	-I $(INCLUDE)

# Source files
# ****************************************************************************

SRCDIR		=	src

#LinkLists
LINKLISTDIR	=	$(SRCDIR)/data_structures/link_list/
LINKLIST	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstsize.c		\
				ft_lstlast.c ft_lstmap.c ft_lstnew.c

#IO
IODIR		=	$(SRCDIR)/io/
IO			=	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_get_next_line.c				\
				ft_putchar.c ft_puts.c ft_putnbr.c ft_putstr.c

#Printf
PRINTFDIR	=	$(SRCDIR)/io/printf/
PRINTF		=	ft_printf.c conv_func.c conv_func2.c get_flags.c print_flags.c print_flags2.c utils.c

#Memory
MEMORYDIR	=	$(SRCDIR)/memory/
MEMORY		=	ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memset.c

#C strings
CSTRINGSDIR	=	$(SRCDIR)/strings/cstrings/
CSTRINGS	=	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c			\
 				ft_split.c ft_strchr.c ft_strichr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c			\
				ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c		\
				ft_substr.c ft_tolower.c ft_toupper.c ft_strndup.c ft_strnrev.c ft_strrev.c ft_atol.c			\
				ft_nbrlen.c

SRCS		=	$(addprefix $(LINKLISTDIR), $(LINKLIST))			\
				$(addprefix $(IODIR), $(IO)) 						\
				$(addprefix $(PRINTFDIR), $(PRINTF)) 				\
				$(addprefix $(MEMORYDIR), $(MEMORY)) 				\
				$(addprefix $(CSTRINGSDIR), $(CSTRINGS)) 			\
				$(addprefix $(STANDARDDIR), $(STANDARD)) 			\

OBJSDIR		=	obj/
OBJS		=	$(addprefix $(OBJSDIR), $(notdir $(SRCS:.c=.o)))

OBJSDIRD	=	objd/
OBJSD		=	$(addprefix $(OBJSDIRD), $(notdir $(SRCS:.c=d.o)))

DEPENDS		=	$(OBJS:.o=.d)

# Recipe
# ****************************************************************************

$(OBJSDIR)%.o: 	src/*/%.c
	@mkdir -p $(OBJSDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(OBJSDIR)%.o: 	src/*/*/%.c
	@mkdir -p $(OBJSDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(OBJSDIRD)%.o: 	src/*/%.c
	@mkdir -p $(OBJSDIRD)
	@$(CC) $(DBFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(NAME): $(OBJS)
	@printf "$(_END)\nCompiled source files\n"
	@ar rcs $(NAME) $(OBJS)
	@printf "$(_GREEN)Finish compiling $(NAME)!$(_END)\n"

$(NAMED):	$(OBJSD)
	@printf "$(_END)\nCompiled debug source files\n"
	@rm -f $(NAMED)
	@ar -rcs $(NAMED) $(OBJSD)
	@printf "$(_GREEN)Finish compiling in debug mode$(NAMED)!$(_END)\n"

all: $(NAME)

clean:
	@printf "$(_YELLOW)Removing object files ...$(_END)\n"
	@rm -rf $(OBJSDIR) $(OBJSDIRD)
	@rm -fr *.dSYM

fclean:	clean
	@printf "$(_RED)Removing Executable ...$(_END)\n"
	@rm -rf $(NAME) $(NAMED)

re:		fclean all

linux:	CFLAGS += -D OPEN_MAX=FOPEN_MAX
linux:	$(NAME)

linux-debug:	CFLAGS += -D OPEN_MAX=FOPEN_MAX
linux-debug:	debug

debug:	$(NAMED)

check-printf:	all
	@printf "\t\t$(_YELLOW)================= [ TEST ] =================$(_END)\n\n"
	@gcc -Wall -Wextra -o test/a.out test/printf.c libft.a -Iincludes && test/a.out
	@rm -rf test/a.out

check-gnl:	all
	@printf "\t\t$(_YELLOW)================= [ TEST ] =================$(_END)\n\n"
	@gcc -Wall -Werror -Wextra -o test/a.out test/gnl.c libft.a -Iincludes && test/a.out
	@rm -rf test/a.out

print-%:	; @echo $* = $($*)

.PHONY: all clean fclean re debug libft linux linux-debug check-printf check-gnl

-include $(DEPENDS)

# Colors
# ****************************************************************************

_GREY	= \033[30m
_RED	= \033[31m
_GREEN	= \033[32m
_YELLOW	= \033[33m
_BLUE	= \033[34m
_PURPLE	= \033[35m
_CYAN	= \033[36m
_WHITE	= \033[37m
_END	= \033[0m

# ****************************************************************************
