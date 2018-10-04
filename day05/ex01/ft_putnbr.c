/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtraore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 21:18:58 by dtraore           #+#    #+#             */
/*   Updated: 2018/09/24 22:38:18 by dtraore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
			nb = - nb;
	}
	if ( nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if ( nb < 10)
	{
		putchar(nb + '0');
	}
}
int	main()
{
	ft_putnbr(11);
	return (0);
}

