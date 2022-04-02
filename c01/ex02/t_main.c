/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 04:51:33 by harslan           #+#    #+#             */
/*   Updated: 2022/03/31 02:43:50 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	int x;
	int y;

	x = 5;
	y = 2;
	a = 1;
	b = 2;
	ft_swap(&a, &b);
	printf("%i %i", a, b);
}
