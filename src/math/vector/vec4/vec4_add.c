/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:25:17 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/14 15:43:29 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec4	*vec4_add(t_vec4 *self, t_vec4 v4)
{
	self->x += v4.x;
	self->y += v4.y;
	self->z += v4.z;
	self->w += v4.w;
	return (self);
}