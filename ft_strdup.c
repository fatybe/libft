/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:25:08 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/13 16:58:16 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	n;

	n = ft_strlen(s) + 1;
	str = (char *)malloc(n * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, n);
	return (str);
}
/*
int	main(void)
{
	char	*s;

	s = "helokjhgf";
	printf("ft : %s\n",ft_strdup(s));
	printf("ori : %s\n",strdup(s));
}
*/
