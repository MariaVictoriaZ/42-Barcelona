/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapata- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:01:07 by mzapata-          #+#    #+#             */
/*   Updated: 2025/04/10 17:32:58 by mzapata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;
	long	num;

	num = nb;
	if (num < 0)
	{
		write (1, "-", 1);
		num = -num;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	digit = (num % 10) + '0';
	write (1, &digit, 1);
}
/*
int	main(void)
{
	ft_putnbr(42);
}
*/
