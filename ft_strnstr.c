/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 09:57:43 by jose              #+#    #+#             */
/*   Updated: 2022/05/15 11:05:59 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	const char	*s1;
	const char	*s2;
	size_t		l_needle;

	s1 = haystack;
	s2 = needle;
	l_needle = ft_strlen(needle);
	if (l_needle == 0)
		return (s1);
	while (*s1 != *s2)
	{
		i = 0;
		while (*s1 == *s2 && i < len)
		{
			s1 + i;
			s2 + i;
			if(*s2 == '\0')
		}
		s1++;
		s2++;
		
	}
	
}