/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 03:58:38 by harslan           #+#    #+#             */
/*   Updated: 2022/04/05 00:38:19 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	alphanumeric(char c)
{
	if ((c < 48 || c > 57) && (c < 65 || c > 90) && (c < 97 || c > 122))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
		if (str[i] > 96 && str[i] < 123 && (alphanumeric(str[i - 1]) || i == 0))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
