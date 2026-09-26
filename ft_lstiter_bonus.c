/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:45:02 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/15 23:27:56 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
int	main(void)
{
	t_list	*s1;
	t_list	*s2;
	t_list	*lst;
	t_list	*tmp;
	int		a;
	int		b;

	a = 1;
	b = 3;
	lst = NULL; // head
	s1 = malloc(sizeof(t_list));
	if (!s1)
		return (0);
	s1->content = &a;
	s1->next = NULL;
	lst = s1;
	s2 = malloc(sizeof(t_list));
	if (!s2)
		return (0);
	s2->content = &b;
	s2->next = NULL;
	lst->next = s2;
	ft_lstiter(lst, add_two);
	printf("node1 :%d\n", *(int *)lst->content);
	printf("node 2: %d", *(int *)lst->next->content);
}
*/
