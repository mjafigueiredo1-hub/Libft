/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:16:04 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/11 17:18:11 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int n_len(long nr)
{
    int nr_l;

    nr_l = 0;
    if (nr <= 0)
        nr_l++;
    while(nr != 0)
    {
        nr = nr / 10;
        nr_l++;
    }
    return (nr_l);
}
char *ft_itoa(int n)
{
    long int    nr;
	int		    result_l;
    char        *result;

    nr = n;
    result_l = n_len(nr);
    result = (char *)malloc((result_l + 1) * sizeof(char));
    if (!result)
        return (NULL);
	result[result_l] = '\0';
    if (nr == 0)
        result[0] = '0';
    if (nr < 0)
    {
        result[0] = '-';
        nr = -nr;
    }
	while (nr > 0)
	{
        result_l--;
		result[result_l] = nr % 10 + '0';
		nr = nr / 10;
	}
	return (result);
}
