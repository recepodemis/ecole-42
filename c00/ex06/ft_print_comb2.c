/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodemis <rodemis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:52:07 by rodemis           #+#    #+#             */
/*   Updated: 2022/02/13 17:57:10 by rodemis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char x, char y, char z, char t)
{
	char	sp;
	char	com;

	sp = ' ';
	com = ',';
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &sp, 1);
	write(1, &z, 1);
	write(1, &t, 1);
}

void	ft_control(char x, char y)
{
	char	sp;
	char	com;

	sp = ' ';
	com = ',';
	if (!(x == '9' && y == '8'))
	{
		write(1, &com, 1);
		write(1, &sp, 1);
	}
}

void	ft_print_combination(char x, char y, char z, char t)
{
	while (x < 58)
	{
		y = 48;
		while (y < 58)
		{
			z = 48;
			while (z < 58)
			{
				t = 48;
				while (t < 58)
				{
					if (x * 10 + y < z * 10 + t)
					{
						ft_putchar(x, y, z, t);
						ft_control(x, y);
					}
					t++;
				}
				z++;
			}
			y++;
		}
		x++;
	}
}

void	ft_print_comb2(void)
{
	char	x;
	char	y;
	char	z;
	char	t;

	x = 48;
	y = 48;
	z = 48;
	t = 48;
	ft_print_combination(x, y, z, t);
}
