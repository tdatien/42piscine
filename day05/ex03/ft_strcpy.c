/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtraore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 14:55:03 by dtraore           #+#    #+#             */
/*   Updated: 2018/09/25 17:03:54 by dtraore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
	int index;
	index = 0;
	while ( src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	
	dest[index] != '\0';
	return (dest);
}


