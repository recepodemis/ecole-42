/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodemis <rodemis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:01:05 by rodemis           #+#    #+#             */
/*   Updated: 2022/02/21 13:05:05 by rodemis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
int main ()
	{
       printf("%d", ft_str_is_uppercase("ABCDEFGH"));
       printf("\n%d", ft_str_is_uppercase("ABCDEFGHaI"));
       printf("\n%d", ft_str_is_uppercase("-_134556ABCDEFGaH67"));
}*/
