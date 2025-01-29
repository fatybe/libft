/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:54:49 by fbenjama          #+#    #+#             */
/*   Updated: 2025/01/18 18:02:44 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

int	main(void)
{
	int		value1;
	int		value2;
	int		value3;
	t_list	*n;
	t_list	*lst;

	value1 = 42;
	value2 = 13;
	value3 = 37;
	lst = NULL;
	n = malloc(sizeof(t_list));
	if (!n)
		return (0);
	n->content = &value1;
	n->next = NULL;
	lst = n;
	n = malloc(sizeof(t_list));
	if (!n)
		return (0);
	n->content = &value2;
	n->next = NULL;
	lst->next = n;
	n = malloc(sizeof(t_list));
	if (!n)
		return (0);
	n->content = &value3;
	n->next = NULL;
	lst->next->next = n;
	printf("%d", ft_lstsize(lst));
}

