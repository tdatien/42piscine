/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtraore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 02:02:54 by dtraore           #+#    #+#             */
/*   Updated: 2018/09/21 02:40:34 by dtraore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		ft_putchar(alphabet);
		alphabet++;
	}
}
int	main()
{
	ft_print_alphabet();
	return(0);
}
