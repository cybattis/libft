/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_div.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:14:05 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/14 15:45:17 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec4	*vec4_divv4(t_vec4 *self, t_vec4 v4)
{
	self->x /= v4.x;
	self->y /= v4.y;
	self->z /= v4.z;
	self->w /= v4.w;
	return (self);
}

t_vec4	*vec4_divi(t_vec4 *self, long n)
{
	self->x /= n;
	self->y /= n;
	self->y /= n;
	self->w /= n;
	return (self);
}

t_vec4	*vec4_divf(t_vec4 *self, double n)
{
	self->x /= n;
	self->y /= n;
	self->z /= n;
	self->w /= n;
	return (self);
}
