/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 00:08:54 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/15 18:04:49 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
}
/*
int	main(void)
{
	int		s;
	t_list	*lst;
	t_list	*n;
	t_list	*new;
	int		c;

	s = 1337;
	lst = NULL;
	n = malloc(sizeof(t_list));
	if (!n)
		return (0);
	n->content = &s;
	n->next = NULL;
	lst = n;
	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	c = 42;
	new->content = &c;
	new->next = NULL;
	ft_lstadd_back(&lst, new);
	while (lst)
	{
		printf("%d\n", *(int *)lst->content);
		lst = lst->next;
	}
}
*/
