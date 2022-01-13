/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:58:54 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/13 22:04:12 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "math.h"

t_vec2	*vec2_multv2(t_vec2 *self, t_vec2 v2)
{
	self->x = self->x * v2.x;
	self->y = self->y * v2.y;
	return (self);
}

t_vec2	*vec2_multi(t_vec2 *self, long n)
{
	self->x = self->x * n;
	self->y = self->y * n;
	return (self);
}

t_vec2	*vec2_multf(t_vec2 *self, double n)
{
	self->x = self->x * n;
	self->y = self->y * n;
	return (self);
}
