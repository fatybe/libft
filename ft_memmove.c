/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:29:37 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/15 23:08:41 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!s && !d)
		return (NULL);
	if (d == s || n == 0)
		return (dest);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	*s = "hello world!";
	char	d[100];
	printf("%s\n", (char *)ft_memmove(d, s, 5));
	printf("ori = %s\n",(char *)memmove(d, s, 5));
}*/
