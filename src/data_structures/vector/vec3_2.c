/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:58:54 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/13 22:15:27 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "math.h"

t_vec3	*vec3_multv2(t_vec3 *self, t_vec3 v3)
{
	self->x *= v3.x;
	self->y *= v3.y;
	self->z *= v3.z;
	return (self);
}

t_vec3	*vec3_multi(t_vec3 *self, long n)
{
	self->x *= n;
	self->y *= n;
	self->y *= n;
	return (self);
}

t_vec3	*vec3_multf(t_vec3 *self, double n)
{
	self->x *= n;
	self->y *= n;
	self->y *= n;
	return (self);
}
