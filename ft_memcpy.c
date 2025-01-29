/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:09:24 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/14 20:46:58 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	if (!dest && !src)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((unsigned char *)dest);
}
/*
int	main(void)
{
	char	*s;
	char	d[30];

	s = "hello";;
	printf("ft = %s\n",(char *)ft_memcpy(d, s, 5));
	printf("ori = %s\n",(char *)memcpy(d, s, 5));
}
*/
