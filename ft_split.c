/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomoreno <jomoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:04:55 by jomoreno          #+#    #+#             */
/*   Updated: 2022/06/16 20:06:34 by jomoreno         ###   ########.fr       */
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

char	*ft_malloc_str(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)ft_calloc(i + 1, sizeof(char));
	if (!word)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	return (word);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	char	**str_total;
	int		words;

	if (str == NULL)
		return (NULL);
	words = ft_count_words(str, c);
	str_total = (char **)malloc(sizeof(char *) * (words + 1));
	if (!str_total)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && *str == c)
			str++;
		if (*str && *str != c)
		{
			str_total[i] = ft_malloc_str(str, c);
			i++;
			while (*str && *str != c)
				str++;
		}		
	}
	str_total[i] = NULL;
	return (str_total);
}
