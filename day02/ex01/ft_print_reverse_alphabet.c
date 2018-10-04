/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtraore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:50:26 by dtraore           #+#    #+#             */
/*   Updated: 2018/09/21 00:50:58 by dtraore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int alphabet;

	alphabet = 122;
	while (alphabet >= 97)
	{
		ft_putchar(alphabet);
		alphabet--;
	}
}
int main()
{
	ft_print_reverse_alphabet();
	return(0);
}

