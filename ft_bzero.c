/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:56:09 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/13 17:38:11 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char s1[20] ="helllloo";
	char s2[20] ="hellll00";
	ft_bzero(s1,5);
	bzero(s2,5);
	printf("ft = %s\n",s1);
	printf("ori = %s\n",s2);
	return (0);
}
*/
