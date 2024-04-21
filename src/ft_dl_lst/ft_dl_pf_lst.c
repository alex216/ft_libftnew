/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_pf_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:31:52 by yliu              #+#    #+#             */
/*   Updated: 2024/04/21 18:28:02 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static void	_print_ascending_direction(const t_lst *lst_p,
	char *(*return_printable)(const t_lst *))
{
	while (!lst_p->is_sentinel)
	{
		ft_printf("%s", return_printable((const t_lst *)lst_p));
		lst_p = lst_p->next_p;
		ft_printf(",");
	}
}

void	ft_dl_pf_lst(const t_lst *lst_p,
	char *(*return_printable)(const t_lst *))
{
	if (!lst_p || !(*return_printable))
	{
		ft_printf("t_lst or funct pointer is NULL\n");
		return ;
	}
	_print_ascending_direction(lst_p, return_printable);
	ft_printf("\n");
	return ;
}
