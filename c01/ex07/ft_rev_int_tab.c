/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 02:19:03 by harslan           #+#    #+#             */
/*   Updated: 2022/04/05 09:07:58 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	index;
	int	temp;

	c = 0;
	temp = 0;
	while (c < size / 2)
	{
		temp = tab[c];
		tab[c] = tab[size];
		tab[size] = temp;
		size--;
		c++;
	}
}
