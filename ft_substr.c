/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macjose <macjose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:17:17 by macjose           #+#    #+#             */
/*   Updated: 2022/05/29 13:38:48 by macjose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s2;
	size_t	s_len;

	s2 = malloc((len + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	s_len = ft_strlen(s2);
	if (start > s_len)
		
	i = 0;
	while (s[start] != '\0' && i <= len)
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	return (s2);
}