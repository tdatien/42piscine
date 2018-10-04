/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtraore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 22:10:32 by dtraore           #+#    #+#             */
/*   Updated: 2018/09/27 01:05:13 by dtraore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int argc, char **argv)
{
	int index;
	char *str;

	if (argc >= 1)
	{
		str = argv[1];
		while (*str)
		{
			ft_putchar(*str);
			str++;
		}
	}
	return (0);
}
