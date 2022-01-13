/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:58:07 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/13 22:06:56 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3	vec3(double x, double y, double z)
{
	t_vec3	v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}

t_vec3	vec3_zero(void)
{
	t_vec3	v;

	v.x = 0;
	v.y = 0;
	v.z = 0;
	return (v);
}

t_vec3	vec3_set(double value)
{
	t_vec3	v;

	v.x = value;
	v.y = value;
	v.z = value;
	return (v);
}

t_vec2	*vec3_add(t_vec3 *self, t_vec3 v3)
{
	self->x += v3.x;
	self->y += v3.y;
	self->z += v3.z;
	return (self);
}

double	vec3_mag(t_vec3 v)
{
	return (fabs(sqrt(v.x * v.x + v.y * v.y + v.z * v.z)));
}
