/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkami <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 14:02:11 by mkami             #+#    #+#             */
/*   Updated: 2019/05/04 17:43:22 by mkami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int		fd;
	int		fd2;
	char	*str;
	int		i;

	i = 0;
	fd = open("test", O_RDONLY);
	fd2 = open("test2", O_RDONLY);
	while (i < 6)
	{
		str = (char *)malloc(sizeof(*str) * 100);
		printf("fd = %d\n", fd);
		printf("return value = %i\n", get_next_line(fd, &str));
		printf("line = %s\n", str);
		printf("-------\n");
		i++;
		free(str);
		str = (char *)malloc(sizeof(*str) * 100);
		printf("fd = %d\n", fd2);
		printf("return value = %i\n", get_next_line(fd2, &str));
		printf("line = %s\n", str);
		printf("-------\n");
		free(str);
	}
	return (0);
}
