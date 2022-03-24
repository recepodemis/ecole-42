/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarsu <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:42:58 by sakarsu           #+#    #+#             */
/*   Updated: 2022/02/13 22:57:45 by sakarsu          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1 && c == 1) || (r == y && c == x && r != 1 && c != 1))
				ft_putchar('/');
			else if (((c == 1) && (r == y)) || ((c == x) && (r == 1)))
				ft_putchar('\\');
			else if ((c == 1) || (c == x) || (r == 1) || (r == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		r++;
		ft_putchar('\n');
	}
}
