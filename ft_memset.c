/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:30:30 by jose              #+#    #+#             */
/*   Updated: 2022/05/03 00:58:45 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
	size_t i;
	unsigned char *p;
	
	i = 0;
	p = str;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
		