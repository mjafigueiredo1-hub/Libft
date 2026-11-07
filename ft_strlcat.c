/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:23:08 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/07 21:02:39 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_l;
	size_t	src_l;
	size_t	c;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen((char *)src);
	if (size == 0 || dst_l >= size)
		return (size + src_l);
	c = 0;
	while (src[c] && (dst_l + c < size - 1))
	{
		dst[dst_l + c] = src[c];
		c++;
	}
	dst[dst_l + c] = 0;
	return (dst_l + src_l);
}
