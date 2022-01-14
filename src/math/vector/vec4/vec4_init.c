/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:58:07 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/14 15:42:32 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

t_vec4	vec4(double x, double y, double z, double w)
{
	t_vec4	v;

	v.x = x;
	v.y = y;
	v.z = z;
	v.w = w;
	return (v);
}

t_vec4	vec4_zero(void)
{
	t_vec4	v;

	v.x = 0;
	v.y = 0;
	v.z = 0;
	v.w = 0;
	return (v);
}

t_vec4	vec4_set(double value)
{
	t_vec4	v;

	v.x = value;
	v.y = value;
	v.z = value;
	v.w = value;
	return (v);
}
