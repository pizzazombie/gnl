/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkami <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:55:01 by mkami             #+#    #+#             */
/*   Updated: 2019/04/09 17:59:05 by mkami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int j;

	j = 1000000000;
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * (-1);
	}
	while (((n / j) == 0) && (j != 1))
		j = j / 10;
	if (n >= 0)
	{
		while (j >= 1)
		{
			ft_putchar_fd((n / j) + '0', fd);
			n = n % j;
			j = j / 10;
		}
	}
}
