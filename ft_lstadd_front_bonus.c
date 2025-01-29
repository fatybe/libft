/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:31:14 by fbenjama          #+#    #+#             */
/*   Updated: 2025/01/19 16:31:57 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	int		n;
	t_list	*lst;
	t_list	*new;
	int		c;

	n = 1337;
	lst = ft_lstnew(&n);
	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	c = 42;
	new->content = &c;
	new->next = NULL;
	ft_lstadd_front(&lst, new);
	while (lst)
	{
		printf("%d\n", *(int *)lst->content);
		lst = lst->next;
	}
}

