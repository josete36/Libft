/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:41:08 by jose              #+#    #+#             */
/*   Updated: 2022/05/12 12:05:31 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ldst;
	size_t	lsrc;
	size_t	fvldst;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	fvldst = ldst;
	if (dstsize <= ldst || dstsize == 0)
		return (lsrc + dstsize);
	else
	i = 0;
	while (src[i] != '\0' && ldst < (dstsize - 1))
	{
		dst[ldst++] = src[i++];
	}
	dst[ldst] = '\0';
	return (fvldst + lsrc);
}
