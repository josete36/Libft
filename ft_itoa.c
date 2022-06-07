/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomoreno <jomoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:38:16 by jomoreno          #+#    #+#             */
/*   Updated: 2022/06/07 19:08:21 by jomoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_trans(char *s, int count, int n)
{
	int o;
	
	o = 0;
	while (count >= 0)
	{
		if (s[o] == '-')
			n = n * -1;
			i++;
	}
	while (n > 9 && i < count)
	{
		s[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	s[i] = n + '0';
	return (s);
}

static int	ft_count(int n)
{
	int	i;

	i = 0;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		count;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else
		count = ft_count(n);
	s = malloc((count) * sizeof(char));
	if (!s)
		return (NULL);
	return (ft_trans(s, count, n));
}
