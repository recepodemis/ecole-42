/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodemis <rodemis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:37:33 by rodemis           #+#    #+#             */
/*   Updated: 2022/02/21 12:54:21 by rodemis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_str_is_numeric(char *str)
{
	int		index;
	int		len;
	char	i;

	index = 0;
	len = ft_strlen(str);
	if (str[0] == '\0')
		return (1);
	while (str[index])
	{
		i = str[index];
		if (i >= '0' && i <= '9')
			index++;
		else
			return (0);
	}
	if (len == index)
		return (1);
	return (0);
}
/*#include<stdio.h>
int	main()
{
	printf("%d", ft_str_is_numeric("01948987493"));
	printf("\n%d", ft_str_is_numeric("0484882j8995489"));
	printf("\n%d", ft_str_is_numeric("-_jsdsdc67sdlkc,"));
}*/
