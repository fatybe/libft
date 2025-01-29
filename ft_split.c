/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:15:54 by fbenjama          #+#    #+#             */
/*   Updated: 2025/01/21 15:49:05 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_free(char **s)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static int	count_world(char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
		{
			s++;
		}
		if (*s)
			count++;
		while (*s && *s != c)
		{
			s++;
		}
	}
	return (count);
}

static char	*find_world(char *s, char c)
{
	char	*start;
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	start = malloc((len + 1) * sizeof(char));
	if (!start)
		return (NULL);
	ft_memmove(start, s, len);
	start[len] = '\0';
	return (start);
}

static void	full_array(char **array, char *s, char c)
{
	size_t	i;
	size_t	index;

	i = 0;
	index = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			s++;
		if (s[i])
		{
			array[index] = find_world(&s[i], c);
			if (!array)
			{
				ft_free(array);
				return ;
			}
			index++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	array[index] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	num_world;

	if (!s)
		return (NULL);
	num_world = count_world((char *)s, c);
	array = malloc((num_world + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	full_array(array, (char *)s, c);
	return (array);
}
/*
int	main(void)
{
	char	*s;
	char	c;
	char	**n;
	int		i;

	s = "hello we are 1337";
	c = 'p';
	n = ft_split(s, c);
	i = 0;
	while (n[i] != NULL)
	{
		printf("%s\n", n[i]);
		i++;
	}
}
*/
