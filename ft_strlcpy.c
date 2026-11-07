/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:22:21 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/07 21:34:26 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_l;
	size_t	c;

	src_l = ft_strlen((char *)src);
	if (size == 0)
		return (src_l);
	c = 0;
	while (src[c] && c < size - 1)
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = 0;
	return (src_l);
}
