/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:51:46 by harslan           #+#    #+#             */
/*   Updated: 2022/04/12 06:39:24 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

int	ft_length(char **strs, int size, int sep_length)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += (size - 1) * sep_length;
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	char	*result;

	i = 0;
	if (size == 0)
		return ((char *)malloc (sizeof(char)));
	length = ft_length(strs, size, ft_strlen(sep));
	result = (char *) malloc ((length + 1) * sizeof(char));
	if (!result)
		return (0);
	while (i < size)
	{
		ft_strcpy(result, strs[i]);
		result += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(result, sep);
			result += ft_strlen(sep);
		}
		i++;
	}
	*result = '\0';
	return (result - length);
}
