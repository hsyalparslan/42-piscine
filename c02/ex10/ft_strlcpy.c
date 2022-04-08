/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 03:25:33 by harslan           #+#    #+#             */
/*   Updated: 2022/04/06 21:29:15 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len++])
{
}
		printf("%d", len);
	return (len);
//	write(1, &len, 1);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;
	ft_strlen(src);
	srclen = ft_strlen(src);
	i = 0;
	if (srclen < size)
	{
		while (src[i++] )
		{
			dest[i] = src[i];
		}
	}
	else if (size != 0)
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}
