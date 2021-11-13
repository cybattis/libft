/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utest.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 20:47:35 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/03 13:18:08 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utest.h"

t_utest	g_utest;

int	ft_assert(int actual, char *file, int line, char *msg)
{
	if (actual != 0)
		return (TEST_PASS);
	printf("[%s] ./%s/:%d %s\n", ERROR, file, line, msg);
	return (TEST_FAIL);
}

void	utest_int(int actual, int expected, int line, char *file)
{
	if (actual == expected)
	{
		PRINT_VERBOSE();
		g_utest.pass++;
	}
	else
	{
		g_utest.fail++;
		printf("->[%s] ./%s:%d Expected: %d Actual: %d\n", XFAIL, file, line, expected, actual);
	}
}

void	test_pass(int line, char *file)
{
	printf("->[%s] ./%s:%d\n", XPASS, file, line);
	g_utest.pass++;
}

void	test_fail(int actual, int expected, int line, char *file)
{
	g_utest.fail++;
	printf("->[%s] ./%s:%d Expected: %d Actual: %d\n", XFAIL, file, line, expected, actual);
}

void	utest_begin(char *name)
{
	if (name)
		printf("%s\n", name);
	g_utest.pass = 0;
	g_utest.fail = 0;
}

void	utest_end(void)
{
	if (g_utest.fail == 0)
		printf("[%s]\n", PASS);
	else
		printf("[%s]\n", FAIL);
}
