/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 23:26:48 by jose              #+#    #+#             */
/*   Updated: 2022/05/01 20:30:19 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	int		res;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && i <= n)
	{
		res = str1[i] - str2[i];
		if (res == 0)
				i++;
		else
			return (res);
	}
	return (0);
}
