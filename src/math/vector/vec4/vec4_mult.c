/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_mult.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:58:54 by cybattis          #+#    #+#             */
/*   Updated: 2022/02/03 19:28:42 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec4	*vec4_multv4(t_vec4 *self, t_vec4 v4)
{
	self->x *= v4.x;
	self->y *= v4.y;
	self->z *= v4.z;
	self->w *= v4.w;
	return (self);
}

t_vec4	*vec4_multi(t_vec4 *self, long n)
{
	self->x *= n;
	self->y *= n;
	self->y *= n;
	self->w *= n;
	return (self);
}

t_vec4	*vec4_multf(t_vec4 *self, float n)
{
	self->x *= n;
	self->y *= n;
	self->y *= n;
	self->w *= n;
	return (self);
}
