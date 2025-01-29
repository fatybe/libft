/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:44:20 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/15 23:19:05 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	signe;
	int	res;

	i = 0;
	signe = 1;
	res = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
	{
		i++;
	}
	if (s[i] == '+')
		i++;
	else if (s[i] == '-')
	{
		signe *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	return (res * signe);
}
/*
int	main(void)
{
	char	*s;

	s = " -1234";
	printf("ft : %d\n",ft_atoi(s));
	printf("ori : %d\n",atoi(s));
}
*/
