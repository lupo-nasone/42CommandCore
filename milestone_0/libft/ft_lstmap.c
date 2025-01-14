/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:21:29 by mafagina          #+#    #+#             */
/*   Updated: 2024/11/25 17:21:30 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	head = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&head, (del));
			return (NULL);
		}
		ft_lstadd_back(&head, temp);
		lst = lst -> next;
	}
	return (head);
}
// static void ft_del(void *content)
// {
// 	free (content);
// }
// static void *ft_lower(void *content)
// {
//     char *str = (char *)content;
//     char *lowered;
//     int i = 0;

//     lowered = malloc(strlen(str) + 1);
//     if (!lowered)
//         return NULL;
//     while (str[i] != '\0') {
//         lowered[i] = (char)ft_tolower((int)str[i]);
//         i++;
//     }
//     lowered[i] = '\0';
//     return lowered;
// }
// int main()
// {
// 	t_list *head = NULL;
// 	t_list *new_node;
// 	t_list *new_node1;
// 	t_list *temp;
// 	t_list *new_list;

// 	char *content1 = "A";
// 	char *content2 = "B";
// 	new_node = ft_lstnew((void *)content1);
// 	ft_lstadd_back(&head, new_node);
// 	new_node1 = ft_lstnew((void *)content2);
// 	ft_lstadd_back(&head, new_node1);
// 	temp = head;
// 	while (temp)
//     {
//         printf("%s\n", (char *)temp->content);
//         temp = temp->next;
//     }
// 	new_list = ft_lstmap(head, ft_lower, ft_del);
// 	while (new_list)
//     {
//         printf("%s\n", (char *)new_list->content);
//         new_list = new_list->next;
//     }
// }