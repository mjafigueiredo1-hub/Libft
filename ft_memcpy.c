/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:20:48 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/07 22:09:41 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dt;
	unsigned char	*sc;
	size_t			c;

	if (!dest && !src)
		return (dest);
	c = 0;
	dt = (unsigned char *)dest;
	sc = (unsigned char *)src;
	while (c < n)
	{
		dt[c] = sc[c];
		c++;
	}
	return (dest);
}
