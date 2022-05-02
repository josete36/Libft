/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:49:51 by jomoreno          #+#    #+#             */
/*   Updated: 2022/05/03 01:09:46 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int	main(void)
{
	//char		c;
	//const char	*str;
	//char		*ret;
	//const char	ch = '%';
	//const char	*str1;
	//const char	*str2;
	size_t		n;
	char		*str3;

	//c = 't';
	//str = "caracal";
	//str1 = "Holaaaaaaaaaa";
	//str2 = "oca";
	str3  = "Hola mi nombre es jose";
	n = 2;
	//printf("%d \n", ft_isalpha(c));
	//printf("%d \n", ft_isdigit(c));
	//printf("%d \n", ft_isalnum(c));
	//printf("%d \n", isascii(c));
	//printf("%d \n", ft_isascii(c));
	//printf("%d \n", ft_isprint(c));
	//printf("%zu \n", ft_strlen(str));
	//printf("%zu \n", strlen(str));
	//printf("%c \n", ft_tolower(c));
	//printf("%c \n", ft_toupper(c));
	//ret = strchr(str, ch);
	//printf("string after %c is - %s\n", ch, ret);
	//printf("%s \n", ft_strchr(str, ch));
	//printf("%s \n", strrchr(str, ch));
	//printf("%s \n", ft_strrchr(str, ch));
	//printf("%d \n", strncmp(str1, str2, n));
	//printf("%d \n", ft_strncmp(str1, str2, n));
	printf ("%s \n", ft_memset(str3, 'a', n));
	return (0);
}
