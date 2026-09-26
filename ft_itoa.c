/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:03:42 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/15 23:23:33 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_num(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		if (n == 0)
			return (1);
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	convert_num(char *str, long n, size_t len)
{
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return ;
	}
	while (n > 0)
	{
		str[--len] = 48 + (n % 10);
		n /= 10;
	}
}

char	*ft_itoa(int nb)
{
	long	n;
	size_t	len;
	char	*str;

	n = nb;
	len = ft_count_num(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		convert_num(str + 1, n, len - 1);
	}
	else
		convert_num(str, n, len);
	return (str);
}
/*
int	main(void)
{
	int	n;

	n = -2147483648;
	printf("%s",ft_itoa(n));
}
*/
