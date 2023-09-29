/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:03:20 by yliu              #+#    #+#             */
/*   Updated: 2023/09/30 01:18:50 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst_p)
{
	if (lst_p == NULL)
		return (NULL);
	while (lst_p->next != NULL)
		lst_p = lst_p->next;
	return (lst_p);
}
