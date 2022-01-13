/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:14:05 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/13 22:14:05 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec2	*vec2_divv2(t_vec2 *self, t_vec2 v2)
{
	self->x /= v2.x;
	self->y /= v2.y;
	return (self);
}

t_vec2	*vec2_divi(t_vec2 *self, long n)
{
	self->x /= n;
	self->y /= n;
	return (self);
}

t_vec2	*vec2_divf(t_vec2 *self, double n)
{
	self->x /= n;
	self->y /= n;
	return (self);
}

t_vec2	*vec2_normalize(t_vec2 *self)
{
	return (vec2_divf(self, vec2_mag(*self)));
}

t_vec2	vec2_normalized(t_vec2 v)
{
	t_vec2	new;
	double	mag;

	mag = vec2_mag(v);
	return (vec2(v.x / mag, v.y / mag));
}
