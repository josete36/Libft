/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:02:32 by jose              #+#    #+#             */
/*   Updated: 2022/05/26 23:25:28 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	lng;

	lng = ft_strlen(s);
	while (lng >= 0)
	{
		if (s[lng] == (char)c)
			return ((char *)&s[lng]);
	lng--;
	}
	return (0);
}
