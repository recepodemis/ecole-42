/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarsu <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:16:30 by sakarsu           #+#    #+#             */
/*   Updated: 2022/02/13 21:35:00 by sakarsu          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 || col == x) && (row == 1 || row == y))
				ft_putchar('o');
			else if (row == 1 || row == y)
				ft_putchar('-');
			else if (col == 1 || col == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
