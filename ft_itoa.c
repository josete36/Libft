/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:58:41 by jose              #+#    #+#             */
/*   Updated: 2022/06/13 18:35:35 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

size_t	ft_len_num(int num)
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

static char	*ft_inttostr(int n, char *str)
{
	int	i;
	int	isneg;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		isneg = 1;
	}
	while (n > 9)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	str[i] = n + '0';
	i++;
	if (isneg == 1)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	*ft_reverse(char *s1, int len)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = malloc((len + 1) * sizeof(char));
	while (len > 0)
	{
		s2[i] = s1[len - 1];
		i++;
		len--;
	}
	return (s2);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			num_len;
	char		*str2;
	long		num;

	num = (long)n;
	num_len = ft_len_num(num);
	if (n == -2147483647)
		return ("-2147483647");
	str = malloc(sizeof(char) * (num_len + 1));
	if (!str)
		return (NULL);
	str2 = ft_inttostr(num, str);
	return (ft_reverse(str2, num_len));
}

/*int	main(void)
{
	int		num;

	num = -2145667777;
	printf("%s \n", ft_itoa(num));
}*/
