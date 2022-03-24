/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodemis <rodemis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:57:35 by rodemis           #+#    #+#             */
/*   Updated: 2022/02/24 11:59:30 by rodemis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	flag;

	index = 0;
	flag = 1;
	ft_strlowcase(str);
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (flag)
				str[index] -= 32;
			flag = 0;
		}
		else if (str[index] >= '0' && str[index] <= '9')
			flag = 0;
		else
			flag = 1;
		index++;
	}
	return (str);
}
/*#include<stdio.h>
int main ()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str1[] = "diujndfvon,odficj,dc dsfovij?kl43lo+dd-sdk%cdj*dc$sdc";
	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
}*/
