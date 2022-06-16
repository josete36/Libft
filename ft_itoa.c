/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomoreno <jomoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:00:49 by jomoreno          #+#    #+#             */
/*   Updated: 2022/06/16 19:40:05 by jomoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

size_t	ft_len_num(long num)
{
	int	i;

	i = 0;
	if (num <= 0)
		i++;
	while (num)
	{
		i++;
		num = num / 10;
	}
	return (i);
}

void	*ft_inttostr(long num, char *str, int num_len, int neg)
{
	str[num_len] = '\0';
	num_len--;
	while (num_len >= 0)
	{
		str[num_len] = num % 10 + '0';
		num = num / 10;
		num_len--;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}

void	ft_isneg(long *num, int *neg)
{
	if (*num < 0)
	{
		*num = *num * -1;
		*neg = 1;
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	int			num_len;
	long		num;
	int			neg;

	if (n == 0)
	{
		str = ft_calloc(2, sizeof(char));
		if (!str)
			return (0);
		str[0] = '0';
		return (str);
	}
	num = n;
	neg = 0;
	num_len = ft_len_num(num);
	ft_isneg(&num, &neg);
	str = malloc((num_len + 1) * sizeof(char));
	if (!str)
		return (0);
	else
		return (ft_inttostr(num, str, num_len, neg));
}
