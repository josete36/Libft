/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomoreno <jomoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:37:46 by jomoreno          #+#    #+#             */
/*   Updated: 2022/05/31 16:59:29 by jomoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	
	s1_len = ft_strlen(s1);
	i = 0;
	if (!s1)
		return (NULL);
	while (i < s1_len && ft_strchr(set, s1[i])
	i++;
	
}