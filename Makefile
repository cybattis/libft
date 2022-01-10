# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 16:51:12 by cybattis          #+#    #+#              #
#    Updated: 2022/01/10 14:48:56 by cybattis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	libft.a
SRC_DIR		=	src/
OBJ_DIR		=	obj/

# Config
# ****************************************************************************

SHELL 		=	/bin/bash
CC 			=	gcc
INCLUDE		=	includes

BASEFLAGS	=	-Wall -Werror -Wextra -MMD
CFLAGS		=	$(BASEFLAGS) -I $(INCLUDE)
DEBUG_FLAGS	=	-g3 -fsanitize=address

# Source files
# ****************************************************************************

SRCS		=	$(wildcard src/*/*.c)
OBJS_NAME	=	$(addprefix $(OBJ_DIR), $(notdir $(SRCS)))
OBJS		=	$(OBJS_NAME:.c=.o)
OBJS_DEBUG	=	$(OBJS_NAME:.c=_d.o)

DEPENDS		=	$(OBJS:.o=.d)

# Recipe
# ****************************************************************************

$(OBJ_DIR)%.o: 	src/*/%.c
	@if [ ! -d $(OBJ_DIR) ];then mkdir -p $(OBJ_DIR); fi
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(OBJ_DIR)%_d.o: 	src/*/%.c
	@if [ ! -d $(OBJ_DIR) ];then mkdir -p $(OBJ_DIR); fi
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(NAME): $(OBJS)
	@printf "$(_END)\nCompiled source files\n"
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	@printf "$(_GREEN)Finish compiling $(NAME)!$(_END)\n"

all: $(NAME)

clean:
	@printf "$(_YELLOW)Removing object files ...$(_END)\n"
	@rm -rf $(OBJ_DIR)
	@rm -fr *.dSYM

fclean:
	@printf "$(_RED)Removing object files and program ...$(_END)\n"
	@rm -rf $(NAME) d_$(NAME) $(OBJ_DIR)
	@rm -fr *.dSYM

re:		fclean all

linux:	CFLAGS += -D OPEN_MAX=FOPEN_MAX
linux:	$(NAME)

linux-debug:	CFLAGS += -D OPEN_MAX=FOPEN_MAX
linux-debug:	debug

debug:	CFLAGS += $(DEBUG_FLAGS)
debug:	$(OBJS_DEBUG)
	@printf "$(_END)\nCompiled source files\n"
	@ar rcs d_$(NAME) $(OBJS_DEBUG)
	@ranlib d_$(NAME)
	@printf "$(_BLUE)Debug build done$(_END)\n"

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
