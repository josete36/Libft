/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomoreno <jomoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:38:16 by jomoreno          #+#    #+#             */
/*   Updated: 2022/06/07 19:40:05 by jomoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_trans(char *s, int count, char s2)
{
	int	j;

	j = 0;
	while (count >= 0)
	{
		if (s[j] == '-')
		{
			s2[j] = s[j];
			j++;
		}
		else
		{
			s2[j] = s[count];
			j++;
			count--;
		}
	}
	j++;
	return (s2);
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
	s2 = malloc((count) * sizeof(char));
	if (!s)
		return (NULL);
	return (ft_trans(s, count, s2));
}
