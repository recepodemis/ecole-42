/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodemis <rodemis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:37:35 by rodemis           #+#    #+#             */
/*   Updated: 2022/02/17 12:39:15 by rodemis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = 48;
	while (x < 58)
	{
		y = x + 1;
		while (y < 58)
		{
			z = y + 1;
			while (z < 58)
			{
				ft_putchar(x, y, z);
				if (!(x == 55))
				{
					write (1, &",", 1);
					write (1, &" ", 1);
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
