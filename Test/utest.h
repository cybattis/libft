/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utest.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 20:55:44 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/04 11:34:40 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTEST_H
# define UTEST_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <string.h>

/* type holding data from test suite */
typedef struct s_utest {
	int	pass;
	int	fail;
}	t_utest;

int		ft_assert(int actual, char *file, int line, char *msg);
void	utest_int(int actual, int expected, int line, char *file);
void	utest_begin(char *name);
void	utest_end(void);
void	test_pass(int line, char *file);
void	test_fail(int actual, int expected, int line, char *file);

# ifdef VERBOSE
# define PRINT_VERBOSE()	printf("->[%s] ./%s:%d\n", XPASS, file, line)
# else
# define PRINT_VERBOSE()	((void)0)
# endif

# define OK      "\033[32mOK\033[00m"
# define PASS    "\033[32mPASS\033[00m"
# define IGNORE  "\033[34mIGNORE\033[00m"
# define FAIL    "\033[31mFAIL\033[00m"
# define ERROR   "\033[31mERROR\033[00m"
# define XFAIL   "\033[31mX\033[00m"
# define XPASS   "\033[32m✓\033[00m"

# define TEST_FAIL   0
# define TEST_PASS   1
# define TEST_IGNORE 2

# define NRM	"\x1B[0m"
# define RED	"\x1B[1;31m"
# define GRN	"\x1B[1;32m"
# define YEL	"\x1B[1;33m"
# define BLU	"\x1B[1;34m"
# define MAG	"\x1B[1;35m"
# define CYN	"\x1B[1;36m"
# define WHT	"\x1B[1;37m"

# define B_NRM	"\x1B[0m"
# define B_RED	"\x1B[0;31m"
# define B_GRN	"\x1B[0;32m"
# define B_YEL	"\x1B[0;33m"
# define B_BLU	"\x1B[0;34m"
# define B_MAG	"\x1B[0;35m"
# define B_CYN	"\x1B[0;36m"
# define B_WHT	"\x1B[0;37m"

# define BG_NRM	"\x1B[40m"
# define BG_RED	"\x1B[41m"
# define BG_GRN	"\x1B[42m"
# define BG_YEL	"\x1B[43m"
# define BG_BLU	"\x1B[44m"
# define BG_MAG	"\x1B[45m"
# define BG_CYN	"\x1B[46m"
# define BG_WHT	"\x1B[47m"

#endif

/* UTEST_H */
