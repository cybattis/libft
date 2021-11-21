# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 16:51:12 by cybattis          #+#    #+#              #
#    Updated: 2021/11/21 18:43:35 by cybattis         ###   ########.fr        #
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
DEBUG_FLAGS	=	-g3

# Source files
# ****************************************************************************

SRCS	=	$(shell find $(SRC_DIR) -name '*.c')
SRCS_N	=	$(shell find $(SRC_DIR) -name '*.c' | xargs basename -a)
OBJS	=	$(addprefix $(OBJ_DIR), $(SRCS_N:.c=.o))

# Recipe
# ****************************************************************************

$(NAME):	$(OBJS)
	@printf "$(_END)\nCompiled source files\n"
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	@printf "$(_GREEN)Finish compiling $(NAME)!\n"

$(OBJ_DIR)%.o:	src/char/%.c
	@if [ ! -d $(OBJ_DIR) ];then mkdir -p $(OBJ_DIR); fi
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(OBJ_DIR)%.o:	src/io/%.c
	@if [ ! -d $(OBJ_DIR) ];then mkdir -p $(OBJ_DIR); fi
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(OBJ_DIR)%.o:	src/list/%.c
	@if [ ! -d $(OBJ_DIR) ];then mkdir -p $(OBJ_DIR); fi
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(OBJ_DIR)%.o:	src/mem/%.c
	@if [ ! -d $(OBJ_DIR) ];then mkdir -p $(OBJ_DIR); fi
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(OBJ_DIR)%.o:	src/nbr/%.c
	@if [ ! -d $(OBJ_DIR) ];then mkdir -p $(OBJ_DIR); fi
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

$(OBJ_DIR)%.o:	src/string/%.c
	@if [ ! -d $(OBJ_DIR) ];then mkdir -p $(OBJ_DIR); fi
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(_GREEN)█$(_END)"

header:
	@printf "$(_CYAN)\t██╗     ██╗██████╗ ███████╗████████╗$(_END)\n"
	@printf "$(_CYAN)\t██║     ██║██╔══██╗██╔════╝╚══██╔══╝$(_END)\n"
	@printf "$(_CYAN)\t██║     ██║██████╔╝█████╗     ██║$(_END)\n"
	@printf "$(_CYAN)\t██║     ██║██╔══██╗██╔══╝     ██║$(_END)\n"
	@printf "$(_CYAN)\t███████╗██║██████╔╝██║        ██║$(_END)\n"
	@printf "$(_CYAN)\t╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝$(_END)\n"
	@printf "\n"

all:	header $(NAME)

clean:
	@printf "$(_YELLOW)Removing object files ...$(_END)\n"
	@rm -rf $(OBJ_DIR)
	@rm -fr *.dSYM

fclean:
	@printf "$(_RED)Removing object files and program ...$(_END)\n"
	@rm -rf $(NAME) $(OBJ_DIR)
	@rm -fr *.dSYM

re:		fclean all

debug:	CFLAGS += -fsanitize=address $(DEBUG_FLAGS)
debug:	re
	@printf "$(_BLUE)Debug build done$(_END)\n"

leak:	CFLAGS += $(DEBUG_FLAGS)
leak:	re
	@printf "$(_BLUE)Leak check build done$(_END)\n"

check:	all
		./$(NAME)

.PHONY: all clean fclean re debug leak test libft

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
