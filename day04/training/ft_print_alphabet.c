/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtraore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 22:13:45 by dtraore           #+#    #+#             */
/*   Updated: 2018/09/23 23:45:54 by dtraore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char alphabet;
	alphabet = 'a';
	while ( alphabet <= 'z')
	{
		ft_putchar(alphabet);
		alphabet++;
	}
}

int main()
{
	ft_print_alphabet();
	return (0);
}

