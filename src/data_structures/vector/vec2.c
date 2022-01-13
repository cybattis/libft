/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:50:01 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/13 22:04:14 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec2	vec2(double x, double y)
{
	t_vec2	v;

	v.x = x;
	v.y = y;
	return (v);
}

t_vec2	vec2_zero(void)
{
	t_vec2	v;

	v.x = 0;
	v.y = 0;
	return (v);
}

t_vec2	vec2_set(double value)
{
	t_vec2	v;

	v.x = value;
	v.y = value;
	return (v);
}

t_vec2	*vec2_add(t_vec2 *self, t_vec2 v2)
{
	self->x += v2.x;
	self->y += v2.y;
	return (self);
}

double	vec2_mag(t_vec2 v)
{
	return (fabs(sqrt(v.x * v.x + v.y * v.y)));
}
