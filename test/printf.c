/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:39:21 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/30 11:18:44 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "libft.h"

int main(void)
{
    char *p = "test";

    printf("[d] > 0\n");
    printf("[1]\n");
    (ft_printf("%01d|\n", 42) == printf("%01d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[2]\n");
    (ft_printf("%-02d|\n", 42) == printf("%-02d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[3]\n");
    (ft_printf("%+-5d|\n", 42) == printf("%+-5d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[4]\n");
    (ft_printf("%+.d|\n", 42) == printf("%+.d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[5]\n");
    (ft_printf("%-.d|\n", 42) == printf("%-.d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[6]\n");
    (ft_printf("%-5.d|\n", 42) == printf("%-5.d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[7]\n");
    (ft_printf("%-10.d|\n", 42) == printf("%-10.d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[8]\n");
    (ft_printf("%+-10.d|\n", 42) == printf("%+-10.d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[9]\n");
    (ft_printf("%+.5d|\n", 42) == printf("%+.5d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[10]\n");
    (ft_printf("%-.5d|\n", 42) == printf("%-.5d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[11]\n");
    (ft_printf("%-5.5d|\n", 42) == printf("%-5.5d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[12]\n");
    (ft_printf("%-10.5d|\n", 42) == printf("%-10.5d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[13]\n");
    (ft_printf("%+-10.5d|\n", 42) == printf("%+-10.5d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[14]\n");
    (ft_printf("% d|\n", 42) == printf("% d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[15]\n");
    (ft_printf("% +d|\n", 42) == printf("% +d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[16]\n");
    (ft_printf("% 5d|\n", 42) == printf("% 5d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[17]\n");
    (ft_printf("% .5d|\n", 42) == printf("% .5d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[18]\n");
    (ft_printf("% 5.5d|\n", 42) == printf("% 5.5d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[19]\n");
    (ft_printf("% 10.5d|\n", 42) == printf("% 10.5d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[20]\n");
    (ft_printf("% -5.5d|\n", 42) == printf("% -5.5d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[21]\n");
    (ft_printf("% -10.5d|\n", 42) == printf("% -10.5d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[22]\n");
    (ft_printf("% 05d|\n", 42) == printf("% 05d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[23]\n");
    (ft_printf("% -05d|\n", 42) == printf("% -05d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[24]\n");
    (ft_printf("% -05.5d|\n", 42) == printf("% -05.5d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[25]\n");
    (ft_printf("% -05.10d|\n", 42) == printf("% -05.10d|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[d] < 0\n");
    printf("[1]\n");
    (ft_printf("%01d|\n", -42) == printf("%01d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[2]\n");
    (ft_printf("%-02d|\n", -42) == printf("%-02d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[3]\n");
    (ft_printf("%+-5d|\n", -42) == printf("%+-5d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[4]\n");
    (ft_printf("%+.d|\n", -42) == printf("%+.d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[5]\n");
    (ft_printf("%-.d|\n", -42) == printf("%-.d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[6]\n");
    (ft_printf("%-5.d|\n", -42) == printf("%-5.d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[7]\n");
    (ft_printf("%-10.d|\n", -42) == printf("%-10.d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[8]\n");
    (ft_printf("%+-10.d|\n", -42) == printf("%+-10.d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[9]\n");
    (ft_printf("%+.5d|\n", -42) == printf("%+.5d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[10]\n");
    (ft_printf("%-.5d|\n", -42) == printf("%-.5d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[11]\n");
    (ft_printf("%-5.5d|\n", -42) == printf("%-5.5d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[12]\n");
    (ft_printf("%-10.5d|\n", -42) == printf("%-10.5d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[13]\n");
    (ft_printf("%+-10.5d|\n", -42) == printf("%+-10.5d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[14]\n");
    (ft_printf("% d|\n", -42) == printf("% d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[15]\n");
    (ft_printf("% +d|\n", -42) == printf("% +d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[16]\n");
    (ft_printf("% 5d|\n", -42) == printf("% 5d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[17]\n");
    (ft_printf("% .5d|\n", -42) == printf("% .5d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[18]\n");
    (ft_printf("% 5.5d|\n", -42) == printf("% 5.5d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[19]\n");
    (ft_printf("% 10.5d|\n", -42) == printf("% 10.5d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[20]\n");
    (ft_printf("% -5.5d|\n", -42) == printf("% -5.5d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[21]\n");
    (ft_printf("% -10.5d|\n", -42) == printf("% -10.5d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[22]\n");
    (ft_printf("% 05d|\n", -42) == printf("% 05d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[23]\n");
    (ft_printf("% -05d|\n", -42) == printf("% -05d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[24]\n");
    (ft_printf("% -05.5d|\n", -42) == printf("% -05.5d|\n", -42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[x]\n");
    (ft_printf("%#01x|\n", 0) == printf("%#01x|\n", 0) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%#01x|\n", LONG_MIN) == printf("%#01x|\n", LONG_MIN) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%01x|\n", 42) == printf("%01x|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-02x|\n", 42) == printf("%-02x|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-.5x|\n", 42) == printf("%-.5x|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-5.5x|\n", 42) == printf("%-5.5x|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-10.5x|\n", 42) == printf("%-10.5x|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%.5x|\n", 42) == printf("%.5x|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%10.5x|\n", 42) == printf("%10.5x|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-5.5x|\n", 42) == printf("%-5.5x|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%05x|\n", 42) == printf("%05x|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-05x|\n", 42) == printf("%-05x|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%#-5x|\n", 42) == printf("%#-5x|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%#.10x|\n", 42) == printf("%#.10x|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-20.10x|\n", 42) == printf("%-20.10x|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%#-20.10x|\n", 42) == printf("%#-20.10x|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[X]\n");
    (ft_printf("%01X|\n", 42) == printf("%01X|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-02X|\n", 42) == printf("%-02X|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-.5X|\n", 42) == printf("%-.5X|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-5.5X|\n", 42) == printf("%-5.5X|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-10.5X|\n", 42) == printf("%-10.5X|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%.5X|\n", 42) == printf("%.5X|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%10.5X|\n", 42) == printf("%10.5X|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-5.5X|\n", 42) == printf("%-5.5X|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%05X|\n", 42) == printf("%05X|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-05X|\n", 42) == printf("%-05X|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%#-5X|\n", 42) == printf("%#-5X|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%#.10X|\n", 42) == printf("%#.10X|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[u]\n");
    (ft_printf("%01u|\n", 42) == printf("%01u|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-02u|\n", 42) == printf("%-02u|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-5u|\n", 42) == printf("%-5u|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%.5u|\n", 42) == printf("%.5u|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-.5u|\n", 42) == printf("%-.5u|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-5.5u|\n", 42) == printf("%-5.5u|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-10.5u|\n", 42) == printf("%-10.5u|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%5u|\n", 42) == printf("%5u|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%.5u|\n", 42) == printf("%.5u|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%5.5u|\n", 42) == printf("%5.5u|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%10.5u|\n", 42) == printf("%10.5u|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-5.5u|\n", 42) == printf("%-5.5u|\n", 42) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[p]\n");
    (ft_printf("%p\n", -1) == printf("%p\n", -1) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%p\n", 1) == printf("%p\n", 1) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%20p|\n", p) == printf("%20p|\n", p) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-20p|\n", p) == printf("%-20p|\n", p) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf(" %p %p ", 0, 0) == printf(" %p %p ", 0, 0) ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("\n[c]\n");
    (ft_printf("%10c|\n", 'c') == printf("%10c|\n", 'c') ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-10c|\n", 'c') == printf("%-10c|\n", 'c') ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    printf("[s]\n");
    (ft_printf("%10s|\n", "coucou") == printf("%10s|\n", "coucou") ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-10s|\n", "coucou") == printf("%-10s|\n", "coucou") ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%10s|\n", "coucou") == printf("%10s|\n", "coucou") ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    (ft_printf("%-10s|\n", "coucou") == printf("%-10s|\n", "coucou") ? printf("\033[32mOK\033[0m\n") : printf("\033[31mFAIL\033[0m\n"));
    return (0);
}
