/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 00:27:22 by jose              #+#    #+#             */
/*   Updated: 2022/06/06 20:57:01 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		s1_len;
	int		set_len;

	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	if (!s1)
		return (NULL);
	i = 0;
	while (i < s1_len && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (i < s1_len && ft_strchr(set, s1[s1_len - 1]))
		s1_len--;
	return (ft_substr(&s1[i], 0, s1_len - i));
}
