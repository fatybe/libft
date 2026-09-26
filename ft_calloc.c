/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:47:04 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/15 23:48:49 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*str;

	str = malloc(nitems * size);
	if (str == NULL)
		return (NULL);
	ft_memset(str, 0, (nitems * size));
	return (str);
}
/*
int	main(void)
{
	int	n;
	int	*ar1;
	int	*ar2;

	n = 4;
	ar1 = ft_calloc(n,sizeof(int));
	ar2 = calloc(n, sizeof(int));
	printf("ft %d %d %d %d\n",ar1[0],ar1[1],ar1[2],ar1[3]);
	printf("ori : %d %d %d %d",ar2[0],ar2[1],ar2[2],ar2[3]);
}
*/
