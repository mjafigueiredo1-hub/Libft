/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:21:55 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/07 20:32:33 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	unsigned char	v;
	size_t			c;

	p = (unsigned char *)ptr;
	v = (unsigned char)value;
	c = 0;
	while (c < num)
	{
		p[c] = v;
		c++;
	}
	return (ptr);
}
