# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 15:12:56 by cybattis          #+#    #+#              #
#    Updated: 2021/11/02 15:12:58 by cybattis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	= 	${wildcard srcs/*.c}
OBJS	= 	${patsubst srcs/%, objs/%, ${SRCS:.c=.o}}

CC		= 	gcc -std=c89
RM		= 	rm -f

CFLAGS	= 	-g -Wall -Wextra -Werror -fsanitize=address -g3 -Iincludes

objs/%.o: srcs/%.c	$(SRCS)
					$(CC) $(CFLAGS) -c $< -o $@

${NAME}:	${OBJS}
			@printf "\033[34m===== [ Norminette ] =====\033[00m\n"
				norminette srcs/*.c && norminette includes/*.h
			@printf "\033[34m===== [ Compiling library... ] =====\033[00m\n"
				ar rcs ${NAME} ${OBJS}
				ranlib ${NAME}
			@printf "\033[34m===== [ Done! ] =====\033[00m\n"

all:		${NAME}

test:
			@printf "\033[36m===== [ Compiling... ] =====\033[00m\n"
				${CC} ${CFLAGS} -Itests/ tests/*.c -L. ${NAME} -o tests/lib_test
			@printf "\033[36m===== [ Start tests ] =====\033[00m\n"
				@tests/lib_test
			@printf "\033[36m===== [ Test Done ] =====\033[00m\n"

test-v:
			@printf "\033[36m===== [ Compiling... ] =====\033[00m\n"
				${CC} ${CFLAGS} -D VERBOSE -Itests/ tests/*.c -L. ${NAME} -o tests/lib_test
			@printf "\033[36m===== [ Start tests ] =====\033[00m\n"
				@tests/lib_test
			@printf "\033[36m===== [ Test Done ] =====\033[00m\n"

clean:
			${RM} ${OBJS}
			@echo "Objects remove successfully!"

fclean:		clean
			${RM} ${NAME}
			@echo "Executable remove successfully!"

re:			fclean all

.PHONY	= all clean fclean re test test-v
