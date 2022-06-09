/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:58:41 by jose              #+#    #+#             */
/*   Updated: 2022/06/09 22:19:32 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_num(int num)
{
	int	i;

	i = 0;
	if (num <= 0)
		i++;
	while (num)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		num_len;
	long	num;

	num_len = ft_len_num(n);
	str = malloc((num_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	while (n)
	{
		str[num_len] = n % 10 + '0';
		n = n / 10;
		num_len++;
	}
	return (str);
}
