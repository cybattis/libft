/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:17:13 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/16 21:25:43 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_matrix(int fd, t_vec3 **matrix, int size_x, int size_y)
{
	int	i;
	int	j;

	i = 0;
	while (i < size_y)
	{
		j = 0;
		while (j < size_x)
		{
			ft_dprintf(fd, "[%d, %d, %d]\n",
				(int)matrix[i][j].x, (int)matrix[i][j].y, (int)matrix[i][j].z);
			j++;
		}
		i++;
	}
}
