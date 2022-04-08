/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:53:27 by harslan           #+#    #+#             */
/*   Updated: 2022/04/07 22:05:20 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	abs;
	int	result;

	result = 0;
	i = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	abs = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			abs *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * abs);
}
