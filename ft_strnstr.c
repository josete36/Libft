/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomoreno <jomoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:06:46 by jomoreno          #+#    #+#             */
/*   Updated: 2022/06/16 17:06:48 by jomoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	char		*s1;
	char		*s2;
	size_t		l_little;

	s1 = (char *)big;
	s2 = (char *)little;
	l_little = ft_strlen(little);
	if (l_little == 0)
		return (s1);
	i = 0;
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s2[j] != '\0' && s1[j + i] == s2[j] && j + i < len)
		{
			j++;
		}
		if (l_little == j)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
