/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madonis <madonis@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 20:56:20 by madonis           #+#    #+#             */
/*   Updated: 2018/09/30 21:14:01 by madonis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		**malloc_array(void)
{
	int		**wudoku;
	int 	x;

	x = 0;
	wudoku = (int**)malloc(sizeof(int*) * 9);
	while (x < 9)
	{
		wudoku[x] = (int*)malloc(sizeof(int) * 9);
		x++;
	}
	return (wudoku);
}

void	print_array(int **wudoku)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < 9)
	{
		while (y < 9)
		{
			ft_putchar(wudoku[x][y] + '0');
			if (y != 8)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		y = 0;
		x++;
	}
}

void	LineN(int argc, char **argv)
{
	int x;
	int	y;
	int **wudoku;

	x = 1;
	y = 0;
	wudoku = malloc_array();
	while (x < argc)
	{
		while (argv[x][y] != '\0')
		{
			if (argv[x][y] == '.')
				wudoku[x - 1][y] = 0;
			else
				wudoku[x - 1][y] = argv[x][y] - '0';
			y++;
		}
		y = 0;
		x++;
	}
	print_array(wudoku);
	sudoku_solver(wudoku, 0, 0);
	print_array(wudoku);
}
