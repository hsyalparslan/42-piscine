/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 03:25:33 by harslan           #+#    #+#             */
/*   Updated: 2022/04/06 19:18:47 by harslan          ###   ########.fr       */
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
	unsigned int	srclen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dest);
	i = 0;
	if (size <= dstlen || size == 0)
		return (size + ft_strlen(src));
	while (src[i] != '\0' && i < size - dstlen - 1)
	{
		dest[i + dstlen] = src[i];
		i++;
	}
	dest[i + dstlen] = '\0';
	return (dstlen + srclen);
}
