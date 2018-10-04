/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtraore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 17:12:42 by dtraore           #+#    #+#             */
/*   Updated: 2018/09/25 17:28:47 by dtraore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;
	index = 0;
	
	while (src[index] != '\0' && (index < n))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] |= '\0';
	return dest;
}

