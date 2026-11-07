/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:49:39 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/07 20:31:53 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t num)
{
	unsigned char	*p;
	size_t			c;

	p = (unsigned char *)ptr;
	c = 0;
	while (c < num)
	{
		p[c] = 0;
		c++;
	}
}
