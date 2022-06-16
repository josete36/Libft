/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomoreno <jomoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:03:11 by jomoreno          #+#    #+#             */
/*   Updated: 2022/06/16 17:03:14 by jomoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = n * (-1);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		str = n % 10 + '0';
	}
	else
		str = n + '0';
	write (fd, &str, 1);
}
