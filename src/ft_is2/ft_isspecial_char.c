/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspecial_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:36:43 by yliu              #+#    #+#             */
/*   Updated: 2024/04/22 15:44:17 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isspecial_char(char c)
{
	return (c == '~' || c == '`' || c == '#' || c == '$' || c == '/'
		|| ft_isblank(c) || ft_isquote(c) || ft_iswildcard(c)
		|| ft_isreserved_word(c) || ft_ismetacharacter(c));
}