/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtraore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 16:47:51 by dtraore           #+#    #+#             */
/*   Updated: 2018/09/28 17:00:59 by dtraore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int index;
	index = -1;
	
	while (s2[++index]) != '\0')
	{
		s1[index] = s2[index]

