/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:21:19 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/07 20:32:36 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dt;
	unsigned char	*sc;
	size_t			c;

	dt = (unsigned char *)dest;
	sc = (unsigned char *)src;
	if (dt > sc)
	{
		c = n;
		while (c > 0)
		{
			c--;
			dt[c] = sc[c];
		}
	}
	else if (dt < sc)
	{
		c = 0;
		while (c < n)
		{
			dt[c] = sc[c];
			c++;
		}
	}
	return (dest);
}
