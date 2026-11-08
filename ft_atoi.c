/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 19:23:20 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/07 20:31:57 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	c;
	int	s;
	int	n;

	c = 0;
	s = 1;
	n = 0;
	while ((nptr[c] >= '\t' && nptr[c] <= '\r') || nptr[c] == ' ')
		c++;
	if (nptr[c] == '-' || nptr[c] == '+')
	{
		if (nptr[c] == '-')
			s = -s;
		c++;
	}
	while (nptr[c] >= '0' && nptr[c] <= '9')
	{
		n = n * 10 + nptr[c] - '0';
		c++;
	}
	return (s * n);
}
