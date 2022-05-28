/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 23:26:48 by jose              #+#    #+#             */
/*   Updated: 2022/05/28 15:15:04 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	if (str2[i] == '\0' || n == 0)
		return (0);
	while (i < n && res == 0)
	{
		res = ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	if (str2[i] == '\0')
		return (0);
	return (res);
}
