/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:00:35 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/13 15:39:48 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utest.h"
#include "../include/libft.h"

void	test_ft_strrev(void)
{
	char	s1[] = "0123456789";

	ft_strrev(s1);
	ft_putstr("ft_strrev: 1: ");
	if (strcmp(s1, "9876543210") == 0)
		printf("%s\n", OK);
	else
		printf("%s -> Expected 9876543210 Actual %s\n", FAIL, s1);
}

void	test_ft_itoa(void)
{
	char	*s1;

	s1 = ft_itoa(-42);
	ft_putstr("ft_itoa: 1: ");
	if (strcmp(s1, "-42") == 0)
		printf("%s\n", OK);
	else
		printf("%s -> Expected -42 Actual %s\n", FAIL, s1);
}
