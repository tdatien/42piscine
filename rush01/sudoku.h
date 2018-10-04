/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madonis <madonis@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 20:56:45 by madonis           #+#    #+#             */
/*   Updated: 2018/09/30 21:21:25 by madonis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <stdlib.h>

void	ft_putchar(char c);
int		**malloc_array(void);
void	LineN(int argc, char **argv);
void	print_array(int **wudoku);
int		is_valid(int next_number, int **wudoku, int row, int column);
int		sudoku_solver(int **wudoku, int row, int column);
#endif
