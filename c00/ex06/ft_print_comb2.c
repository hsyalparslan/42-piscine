/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:55:48 by harslan           #+#    #+#             */
/*   Updated: 2022/03/27 22:15:48 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_2int(int a, int b)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
}

void	ft_comma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_2int(x / 10, x % 10);
			ft_putchar(' ');
			ft_2int(y / 10, y % 10);
			if (x != 98)
				ft_comma();
			y++;
		}
		x++;
	}	
}
