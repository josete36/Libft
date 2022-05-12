/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macjose <macjose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:41:08 by jose              #+#    #+#             */
/*   Updated: 2022/05/12 10:53:18 by macjose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ldst;
	size_t	lsrc;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (dstsize <= ldst || dstsize == 0)
		return (lsrc + dstsize);
	else
	i = 0;
	while (src[i] != '\0' && ldst < (dstsize - 1))
	{
		dst[i + ldst] = src[i];
		i++;
	}
	dst[ldst] = '\0';
	return (ldst + lsrc);
}
