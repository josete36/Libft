/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomoreno <jomoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:06:54 by jomoreno          #+#    #+#             */
/*   Updated: 2022/06/16 17:06:56 by jomoreno         ###   ########.fr       */
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
