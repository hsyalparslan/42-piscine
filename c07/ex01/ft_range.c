/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 02:32:16 by harslan           #+#    #+#             */
/*   Updated: 2022/04/12 03:33:11 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	n;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	n = max - min;
	range = (int *) malloc (sizeof (int) * n);
	if (!range)
		return (NULL);
	while (max != min)
	{
		*range++ = min++;
	}
	return (range - n);
}
