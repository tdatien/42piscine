/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtraore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 16:39:31 by dtraore           #+#    #+#             */
/*   Updated: 2018/09/27 19:51:30 by dtraore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

char	*ft_strdup(char *src);
{
	int index;
	int len;
	char *str;

	len = 0;
	While (src[len])
			len++;
	str = (char*)malloc(sizeof(*srt) * (len + 1));
	i = 0;
	while (i < len)
	{
		str[index] = src[index];
		i++;
	}
	return (str);
}

