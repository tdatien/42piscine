/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madonis <madonis@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 20:56:36 by madonis           #+#    #+#             */
/*   Updated: 2018/09/30 21:16:50 by madonis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdio.h>

int	is_valid(int number, int **wudoku, int row, int col)
{
	int x;
	int y;

	x = 0;
	while (x < 9)
	{
		if (wudoku[x][col] == number || wudoku[row][x] == number)
			return (0);
		x++;
	}
	x = (row / 3) * 3;
	y = (col / 3) * 3;
	while (x <= (((row / 3) * 3) + 2))
	{
		while (y <= ((col / 3) * 3) + 2)
		{
			if (wudoku[x][y] == number && x != row && y != col)
					return (0);
			y++;
		}
		y = (col / 3) * 3;
		x++;
	}
	return 1;
}

int	sudoku_solver(int **wudoku, int row, int column)
{
	print_array(wudoku);
	int next_number;

	next_number = 1;
	if (wudoku[row][column] != 0)
	{
		if (column == 8)
			sudoku_solver(wudoku, row + 1, 0);
		else
			sudoku_solver(wudoku, row, column + 1);
	}
	else
	{
    	while (next_number < 10)
    	{
    		if (is_valid(next_number, wudoku, row, column))
    		{
				printf("%d is valid for row, col: %d, %d\n", next_number, row, column);
    			wudoku[row][column] = next_number;
    			if (column >= 8)
    			{
    				if (sudoku_solver(wudoku, row + 1, 0))
					    printf("solving succeeds\n");
    					return (1);
    			}
    			else
    			{
    				if (sudoku_solver(wudoku, row, column + 1))
    					return (1);
    			}
    			wudoku[row][column] = 0;
    		}
    		next_number++;
    	}
	}
	return (0);
}
