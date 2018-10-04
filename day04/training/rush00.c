/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtraore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 23:58:47 by dtraore           #+#    #+#             */
/*   Updated: 2018/09/26 00:14:44 by dtraore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	rush00(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ( j == 0 || j == y-1)
			{
				if ( i == 0 || i == x-1)
					ft_putchar('o');
				else
					ft_putchar('-');
			}

			if ( i == 0 || i == x-1)
			{
				ft_putchar('|');
			else
				ft_putchar(' ');
			}
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
int	main()
{
	rush(5,4);
	return(0);
}

