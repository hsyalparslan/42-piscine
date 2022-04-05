/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 03:25:33 by harslan           #+#    #+#             */
/*   Updated: 2022/04/05 10:09:22 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dstlen;

	dstlen = ft_strlen(dest);
	i = 0;
	if (ft_strlen(src) + 1 < size)
	{
		while (src[i] != '\0' )
		{
			dest[i + dstlen] = src[i];
			i++;
		}
		dest[i + dstlen] = '\0';
	}
	else if (size != 0)
	{
		while (i < size - 1)
		{
			dest[i + dstlen] = src[i];
			i++;
		}
		dest[i + dstlen] = '\0';
	}
	return (dstlen + ft_strlen(src));
}
