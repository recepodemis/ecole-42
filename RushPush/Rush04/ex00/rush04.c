/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarsu <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:20:44 by sakarsu           #+#    #+#             */
/*   Updated: 2022/02/12 17:06:42 by sakarsu          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	while (a <= y)
	{
		b = 1;
		while (b <= x)
		{
			if ((a == 1 && b == 1) || (a == y && b == x && a != 1 && b != 1))
				ft_putchar('A');
			else if ((a == 1 && b == x) || (a == y && b == 1))
				ft_putchar('C');
			else if ((a == 1) || (b == 1) || (a == y) || (b == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			b++;
		}
		ft_putchar('\n');
		a++;
	}
}
