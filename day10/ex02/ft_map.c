/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtraore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 21:17:04 by dtraore           #+#    #+#             */
/*   Updated: 2018/10/02 21:54:59 by dtraore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *r;

	i = 0;
	if ((r = (int *)malloc(sizeof(int) * length)) == NULL)
		return (NULL);
	while (i < length)
	{
		r[i] = f(tab[i];
		i++;
	}
	return (r);
}

