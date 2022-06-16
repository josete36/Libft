/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomoreno <jomoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:05:49 by jomoreno          #+#    #+#             */
/*   Updated: 2022/06/16 17:05:52 by jomoreno         ###   ########.fr       */
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
