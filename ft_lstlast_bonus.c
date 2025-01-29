/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:36:19 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/13 00:07:02 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
	int		value1;
	int		value2;
	int		value3;
	t_list	*n;
	t_list	*lst;
	t_list	*m;

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
	m = ft_lstlast(lst);
	printf("%d", *(int *)m->content);
}
*/
