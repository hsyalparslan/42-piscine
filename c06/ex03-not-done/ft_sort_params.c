/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 03:33:31 by harslan           #+#    #+#             */
/*   Updated: 2022/04/08 03:57:57 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
    {
        i++;
    }
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = ac - 1;
	j = 0;
	while (i > 0)
	{
		while (av[i][j] != '\0')
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i--;
	}
	return (0);
}
