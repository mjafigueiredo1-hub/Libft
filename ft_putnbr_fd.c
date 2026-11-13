/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:09:35 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/11 20:46:36 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr_fd(int n, int fd)
{
	char	d;
	long	nr;

	nr = (long) n;
	if (nr < 0)
	{
		nr = -nr;
        ft_putchar_fd('-', fd);
	}
	if (nr >= 10)
		ft_putnbr_fd(nr / 10, fd);
	d = (nr % 10) + '0';
	ft_putchar_fd(d, fd);
}
