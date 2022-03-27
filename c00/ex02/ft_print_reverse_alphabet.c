/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:37:05 by harslan           #+#    #+#             */
/*   Updated: 2022/03/24 15:39:19 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reverse_alphabet;

	reverse_alphabet = 'z';
	while (reverse_alphabet >= 'a')
	{
		write(1, &reverse_alphabet, 1);
		reverse_alphabet--;
	}
}
