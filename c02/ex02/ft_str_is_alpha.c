/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodemis <rodemis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:24:02 by rodemis           #+#    #+#             */
/*   Updated: 2022/02/21 12:28:28 by rodemis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_str_is_alpha(char *str)
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
		if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
			index++;
		else
			return (0);
	}
	if (len == index)
		return (1);
	return (0);
}
