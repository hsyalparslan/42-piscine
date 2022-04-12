/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:51:40 by harslan           #+#    #+#             */
/*   Updated: 2022/04/11 23:04:43 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power > 0)
	{
		return (i *= ft_recursive_power(nb, (power - 1)));
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (i);
}
