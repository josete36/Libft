/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:32:27 by jose              #+#    #+#             */
/*   Updated: 2022/06/14 20:04:13 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	c_words;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	if (!s[i])
		return (0);
	c_words = 1;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c && s[i + 1] != '\0')
			c_words++;
		i++;
	}
	return (c_words);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str_total;
	int		words;

	if (s == NULL)
		return (NULL);
	words = ft_count_word(s, c);
	str_total = (char **)malloc(sizeof(char ))
		
}