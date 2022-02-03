/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_lerpf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:48:57 by cybattis          #+#    #+#             */
/*   Updated: 2022/02/03 19:28:42 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

t_vec4	vec4_lerpf(t_vec4 base, t_vec4 high, float value)
{
	t_vec4	v;

	v.x = ft_lerp(base.x, high.x, value);
	v.y = ft_lerp(base.y, high.y, value);
	v.z = ft_lerp(base.z, high.z, value);
	v.w = ft_lerp(base.w, high.w, value);
	return (v);
}
