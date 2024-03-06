/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/10 14:48:06 by bengel        #+#    #+#                 */
/*   Updated: 2024/01/10 14:58:51 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		temp = lst->next;
		f(lst->content);
		lst = temp;
	}
}
