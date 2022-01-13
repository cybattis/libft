/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:31:54 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/13 21:00:56 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

int main(void)
{
	t_vec2	v;

	v = vec2(42, 69);
	ft_printf("vec2() ");
	(v.x == 42 && v.y == 69) ? ft_printf("OK\n") : ft_printf("FAIL\n");
	v = vec2_zero();
	ft_printf("vec2_zero() ");
	(v.x == 0 && v.y == 0) ? ft_printf("OK\n") : ft_printf("FAIL\n");
	v = vec2_set(42);
	ft_printf("vec2_set() ");
	(v.x == 42 && v.y == 42) ? ft_printf("OK\n") : ft_printf("FAIL\n");
	return (0);
}
