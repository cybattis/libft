# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 16:51:12 by cybattis          #+#    #+#              #
#    Updated: 2022/02/03 19:56:04 by cybattis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	libft.a
NAMED 		=	libft_d.a

# Config
# ****************************************************************************

SHELL 		=	/bin/bash
CC 			=	gcc
INCLUDE		=	includes

CFLAGS		=	-Wall -Wextra -O2 -MMD $(HDFLAGS)
DBFLAGS		=	$(CFLAGS) -g3 -fsanitize=address
HDFLAGS		=	-I $(INCLUDE)

# Source files
# ****************************************************************************

SRCDIR		=	src

#LinkLists
LINKLISTDIR	=	$(SRCDIR)/data_structures/link_list/
LINKLIST	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstsize.c		\
				ft_lstlast.c ft_lstmap.c ft_lstnew.c
#Math
MATHDIR		=	$(SRCDIR)/math/
MATH		=	math.c

#Vector
VECTORDIR	=	$(SRCDIR)/math/vector/
VEC2		=	vec2_init.c vec2_add.c vec2_mult.c vec2_div.c vec2_norm.c
VEC3		=	vec3_init.c vec3_add.c vec3_mult.c vec3_div.c vec3_norm.c vec3_lerpf.c
VEC4		=	vec4_init.c vec4_add.c vec4_mult.c vec4_div.c vec4_norm.c vec4_lerpf.c

VECTOR		=	$(addprefix vec2/, $(VEC2))		\
				$(addprefix vec3/, $(VEC3))		\
				$(addprefix vec4/, $(VEC4))

#Matrix
MATRIXDIR	=	$(SRCDIR)/math/matrix/
MATRIX		=	matrix_mult.c

#IO
IODIR		=	$(SRCDIR)/io/
IO			=	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_get_next_line.c				\
				ft_putchar.c ft_puts.c ft_putnbr.c ft_putstr.c ft_print_matrix.c

#Printf
PRINTFDIR	=	$(SRCDIR)/io/printf/
PRINTF		=	ft_printf.c conv_func.c conv_func2.c get_flags.c print_flags.c print_flags2.c utils.c

#Memory
MEMORYDIR	=	$(SRCDIR)/memory/
MEMORY		=	ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memccpy.c ft_memmove.c			\
				ft_memset.c mem_utils.c

#C strings
CSTRINGSDIR	=	$(SRCDIR)/strings/cstrings/
CSTRINGS	=	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c			\
 				ft_split.c ft_strchr.c ft_strichr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c			\
				ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c		\
				ft_substr.c ft_tolower.c ft_toupper.c ft_strndup.c ft_strnrev.c ft_strrev.c ft_atol.c			\
				ft_nbrlen.c ft_isspace.c

SRCS		=	$(addprefix $(LINKLISTDIR), $(LINKLIST))	\
				$(addprefix $(VECTORDIR), $(VECTOR))		\
				$(addprefix $(MATHDIR), $(MATH))			\
				$(addprefix $(MATRIXDIR), $(MATRIX))		\
				$(addprefix $(IODIR), $(IO)) 				\
				$(addprefix $(PRINTFDIR), $(PRINTF)) 		\
				$(addprefix $(MEMORYDIR), $(MEMORY)) 		\
				$(addprefix $(CSTRINGSDIR), $(CSTRINGS)) 	\
				$(addprefix $(STANDARDDIR), $(STANDARD))

OBJSDIR		=	obj/
OBJS		=	$(addprefix $(OBJSDIR), $(notdir $(SRCS:.c=.o)))

OBJSDIRD	=	objd/
OBJSD		=	$(addprefix $(OBJSDIRD), $(notdir $(SRCS:.c=.o)))

DEPENDSD	=	$(OBJSD:.o=.d)
DEPENDS		=	$(OBJS:.o=.d)

# Recipe
# ****************************************************************************

$(OBJSDIR)%.o: 		src/*/%.c
	@mkdir -p $(OBJSDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(OBJSDIR)%.o: 		src/*/*/%.c
	@mkdir -p $(OBJSDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(OBJSDIR)%.o: 	src/*/*/*/%.c
	@mkdir -p $(OBJSDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(NAME):	$(OBJS)
	@printf "$(_END)\nCompiled source files\n"
	@ar rcs $(NAME) $(OBJS)
	@printf "$(_GREEN)Finish compiling $(NAME)!$(_END)\n"

# Debug
$(OBJSDIRD)%.o: 	src/*/%.c
	@mkdir -p $(OBJSDIRD)
	@$(CC) $(DBFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(OBJSDIRD)%.o: 	src/*/*/%.c
	@mkdir -p $(OBJSDIRD)
	@$(CC) $(DBFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(OBJSDIRD)%.o: 	src/*/*/*/%.c
	@mkdir -p $(OBJSDIRD)
	@$(CC) $(DBFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(NAMED):	$(OBJSD)
	@printf "$(_END)\nCompiled debug source files\n"
	@rm -f $(NAMED)
	@ar -rcs $(NAMED) $(OBJSD)
	@printf "$(_GREEN)Finish compiling in debug mode$(NAMED)!$(_END)\n"

#Action
# ****************************************************************************

all: 		$(NAME)

clean:
	@printf "$(_YELLOW)Removing object files ...$(_END)\n"
	@rm -rf $(OBJSDIR) $(OBJSDIRD)
	@rm -fr *.dSYM

fclean:		clean
	@printf "$(_RED)Removing Executable ...$(_END)\n"
	@rm -rf $(NAME) $(NAMED)

re:			fclean all

debug:		$(NAMED)

test:		debug
			./test/test.sh

print-%:	; @echo $* = $($*)

.PHONY: all clean fclean re debug libft test

-include $(DEPENDS)
-include $(DEPENDSD)

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
