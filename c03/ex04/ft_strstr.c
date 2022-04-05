/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:29:19 by harslan           #+#    #+#             */
/*   Updated: 2022/04/05 08:44:29 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (!*to_find)
		return (str);
	while (str[i] != '\0')
	{
		if (to_find[0] == str[i])
		{
			k = i;
			while (to_find[j] == str[k] && str[k])
			{
				k++;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
			j = 0;
		}
		i++;
	}
	return (0);
}
