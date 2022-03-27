/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimaras <dimaras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:07:54 by dimaras           #+#    #+#             */
/*   Updated: 2022/03/27 20:43:22 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	x_maker(int x, int y)
{
	ft_putchar('/');
	x--;
	while (x >= 2)
	{
		ft_putchar('*');
		x--;
	}
	if (x == 1)
	{
		ft_putchar('\\');
	}
	if (y == 1)
		ft_putchar('\n');
}

void	y_maker(int x)
{
	ft_putchar('\n');
	ft_putchar('*');
	x--;
	while (x >= 2)
	{
		ft_putchar(' ');
		x--;
	}
	if (x == 1)
		ft_putchar('*');
		x--;
}

void	z_maker(int x)
{
	ft_putchar('\\');
	x--;
	while (x >= 2)
	{
		ft_putchar('*');
		x--;
	}
	if (x == 1)
		ft_putchar('/');
	ft_putchar('\n');
}

void	rush(int x, int y)
{	
	if (x <= 0)
		return ;
	if (y <= 0)
		return ;
	x_maker(x, y);
	y--;
	if (y >= 1)
	{
		while (y >= 2)
		{
			y_maker(x);
			y--;
		}
		ft_putchar('\n');
		z_maker(x);
	}	
}
