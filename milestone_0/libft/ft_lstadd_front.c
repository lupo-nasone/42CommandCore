/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:21:21 by mafagina          #+#    #+#             */
/*   Updated: 2024/11/25 17:21:22 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int main()
// {
// 	t_list *head = NULL;
// 	t_list *new_node;
// 	t_list *new_node1;
// 	t_list *temp;

// 	char *content1 = "1";
// 	char *content2 = "2";
// 	new_node = ft_lstnew((void *)content1);
// 	ft_lstadd_front(&head, new_node);
// 	new_node1 = ft_lstnew((void *)content2);
// 	ft_lstadd_front(&head, new_node1);
// 	temp = head;
// 	while(temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}
// }
