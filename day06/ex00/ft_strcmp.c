/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtraore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 20:31:35 by dtraore           #+#    #+#             */
/*   Updated: 2018/09/26 20:57:00 by dtraore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int index;
	index = 0;

	while (s1[index])
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
			index++;
	}
	return (s1[index] - s2[index]);
}

