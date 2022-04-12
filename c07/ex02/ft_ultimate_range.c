/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 02:32:16 by harslan           #+#    #+#             */
/*   Updated: 2022/04/12 03:47:10 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*buffer;
	int	n;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	n = max - min;
	buffer = (int *) malloc (sizeof (int) * n);
	if (!range)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	while (max != min)
	{
		*buffer++ = min++;
	}
	return (n);
}
