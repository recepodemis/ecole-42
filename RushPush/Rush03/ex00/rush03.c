/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbilgin <bbilgin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:51:01 by bbilgin           #+#    #+#             */
/*   Updated: 2022/02/13 19:02:19 by bbilgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar( char c);

void	rush(int x, int y)
{
	int	s;
	int	k;

	s = 1 ;
	while (s <= y)
	{
		k = 1;
		while (k <= x)
		{
			if ((s == 1 && k == 1) || (s == y && k == 1))
				ft_putchar('A');
			else if ((s == 1 && k == x) || (s == y && k == x))
				ft_putchar('C');
			else if ((s == 1 || s == y || k == 1 || k == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			k++;
		}
		s++ ;
		ft_putchar('\n');
	}
}	
