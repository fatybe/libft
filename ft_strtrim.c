/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:39:07 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/15 22:29:04 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_check(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while ((end > start) && ft_check(s1[end], set))
		end--;
	str = malloc(((end - start + 1) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "ahhhkhh hello world! ahhha";
	set = "ah";
	printf("%s", ft_strtrim(s1, set));
}*/
