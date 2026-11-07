/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 18:54:31 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/07 20:32:43 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				c;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	c = 0;
	while (c < n)
	{
		if (*(p1 + c) != *(p2 + c))
		{
			return (*(p1 + c) - *(p2 + c));
		}
		c++;
	}
	return (0);
}
