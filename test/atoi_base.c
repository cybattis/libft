/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:01:26 by cybattis          #+#    #+#             */
/*   Updated: 2022/02/05 23:44:36 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	ft_printf("----------------------\n");
	ft_printf("%d\n", ft_atoi_base("111000", "01"));
	ft_printf("%d\n", ft_atoi_base("ff", "0123456789abcdef"));
	ft_printf("%d\n", ft_atoi_base("52", "01234567"));
	ft_printf("%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	ft_printf("%d\n", ft_atoi_base("7fffffff", "0123456789abcdef"));
	ft_printf("%d\n", ft_atoi_base("ff", "abcc"));
	ft_printf("%d\n", ft_atoi_base("ff", ""));
	ft_printf("%d\n", ft_atoi_base("ff", "a"));
	ft_printf("Expected: -4242\n");
	ft_putnbr(ft_atoi_base("   -1000010010010aaaa", "01"));
	ft_printf("\nExpected: 4242\n");
	ft_printf("\t  %d\n", ft_atoi_base("   1000010010010brbr", "01"));
	ft_printf("Expected: -4242\n");
	ft_printf("\t  %d\n", ft_atoi_base("  -10222few", "01234567"));
	ft_printf("Expected: 4242\n");
	ft_printf("\t  %d\n", ft_atoi_base("   \n10222AAAA", "01234567"));
	ft_printf("Expected: -4242\n");
	ft_printf("\t  %d\n", ft_atoi_base("  -1092", "0123456789ABCDEF"));
	ft_printf("Expected: 42\n");
	ft_printf("\t  %d\n", ft_atoi_base(" \tvn123456", "poneyvif"));
	ft_printf("Expected: -4242\n");
	ft_printf("\t  %d\n", ft_atoi_base("\v   -opnnn123456", "poneyvif"));
	ft_printf("Expected: 4242\n");
	ft_printf("\t  %d\n", ft_atoi_base("opnnn1treo123456", "poneyvif"));
	ft_printf("Expected: -789456\n");
	ft_printf("\t  %d\n", ft_atoi_base("  -C0BD0zzzz45", "0123456789ABCDEF"));
	return (0);
}
