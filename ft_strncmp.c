/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomoreno <jomoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:06:38 by jomoreno          #+#    #+#             */
/*   Updated: 2022/06/16 17:24:38 by jomoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i] && str1[i] != '\0'
			&& str2[i] != '\0') && i < n - 1)
	{
		i++;
	}
	res = ((unsigned char)str1[i] - (unsigned char)str2[i]);
	return (res);
}
