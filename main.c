/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:49:51 by jomoreno          #+#    #+#             */
/*   Updated: 2022/05/01 21:58:41 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int	main(void)
{
	char		c;
	const char	*str;
	char		*ret;
	const char	ch = '%';
	const char	*str1;
	const char	*str2;
	size_t		n;

	c = 't';
	str = "caracal";
	str1 = "Holb";
	str2 = "Holnaaaaaa";
	n = 4;
	printf("%d \n", ft_isalpha(c));
	printf("%d \n", ft_isdigit(c));
	printf("%d \n", ft_isalnum(c));
	printf("%d \n", isascii(c));
	printf("%d \n", ft_isascii(c));
	printf("%d \n", ft_isprint(c));
	printf("%zu \n", ft_strlen(str));
	printf("%zu \n", strlen(str));
	printf("%c \n", ft_tolower(c));
	printf("%c \n", ft_toupper(c));
	ret = strchr(str, ch);
	printf("string after %c is - %s\n", ch, ret);
	printf("%s \n", ft_strchr(str, ch));
	printf("%s \n", strrchr(str, ch));
	printf("%s \n", ft_strrchr(str, ch));
	printf("%d \n", strncmp(str1, str2, n));
	printf("%d \n", ft_strncmp(str1, str2, n));
	return (0);
}
git 