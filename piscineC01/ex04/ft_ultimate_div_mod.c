/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapata- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:38:44 by mzapata-          #+#    #+#             */
/*   Updated: 2025/04/03 15:14:38 by mzapata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	if (*b != 0)
	{
		temp_div = *a / *b;
		temp_mod = *a % *b;
		*a = temp_div;
		*b = temp_mod;
	}
}
/*
int	main(void)
{
	int	num1 = 10;
	int	num2 = 5;

	printf("Before = %d, After = %d\n", num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("After = %d, Before = %d\n", num1, num2);
	return (0);
}
*/
