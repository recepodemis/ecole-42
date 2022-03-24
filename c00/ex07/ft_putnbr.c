/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodemis <rodemis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:52:03 by rodemis           #+#    #+#             */
/*   Updated: 2022/02/20 17:19:44 by rodemis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	power(int x, int y)
{
	int	power;
	int	i;

	power = 1;
	i = 1;
	while (i <= y)
	{
		power *= x;
		i++;
	}
	return (power);
}

int	find_decimal(int n)
{
	int		decimal;

	decimal = 0;
	while (n > 0)
	{
		n = n / 10;
		decimal++;
	}
	return (decimal);
}

void	ft_putnbr(int nb)
{
	int		decimal;
	int		number;
	char	wr;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	decimal = find_decimal(nb);
	while (decimal > 0)
	{
		number = nb / power(10, (decimal - 1));
		wr = number + '0';
		write(1, &wr, 1);
		nb = nb - number * power(10, (decimal -1));
		decimal--;
	}
}
