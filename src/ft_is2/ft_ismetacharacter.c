/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismetacharacter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:37:30 by yliu              #+#    #+#             */
/*   Updated: 2024/04/25 10:42:09 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is2.h"

bool	ft_ismetacharacter(char c)
{
	return (c == '|' || c == '&' || c == '(' || c == ')' || c == ';' || c == '<'
		|| c == '>' || ft_isblank(c));
}
