/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:44:06 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/13 18:31:37 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
/*
int	main(void)
{
	char	*str;

	str = "hxkjhg";
	printf("ft : %s\n",ft_strchr(str,'\0'));
	printf("ori : %s\n",strchr(str,'\0'));
}
*/
