/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapata- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:31:36 by mzapata-          #+#    #+#             */
/*   Updated: 2025/04/03 14:57:24 by mzapata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	dv;
	int	md;
	int	a = 10;
	int	b = 5;

	ft_div_mod(a, b, &dv, &md);
	printf("%d, %d\n", dv, md);
	return(0);
}
*/
