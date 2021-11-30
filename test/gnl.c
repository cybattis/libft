/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:15:23 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/30 17:37:54 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

int main(void)
{
	int		i;
	int		fd;
	char	*line;

	i = 1;
	fd = open("test/files/file", O_RDONLY);
	if (fd == -1)
	{
		printf("Error opening file\n");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		ft_printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
