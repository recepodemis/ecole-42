/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodemis <rodemis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:30:41 by rodemis           #+#    #+#             */
/*   Updated: 2022/03/02 15:59:34 by rodemis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	while (n * n <= nb && nb > 0)
	{
		if (n >= 46341)
			return (0);
		else if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}
