/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapata- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:21:42 by mzapata-          #+#    #+#             */
/*   Updated: 2025/04/01 12:12:43 by mzapata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int z)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = x + '0';
	num2 = y + '0';
	num3 = z + '0';
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
	if (x != 7 || y != 8 || z != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				ft_putchar(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
