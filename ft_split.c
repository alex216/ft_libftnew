/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:41:13 by yliu              #+#    #+#             */
/*   Updated: 2023/10/10 21:25:43 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wc(char *str, char sep)
{
	size_t		words_count;
	size_t		i;

	i = 0;
	words_count = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 && str[0] != sep) || (str[i] != sep && str[i - 1] == sep))
			words_count++;
		i++;
	}
	return (words_count);
}

static void	ft_splitexec(char **dst, char const *str, char sep)
{
	size_t			word_len;
	size_t			i;

	i = 0;
	while (*str != '\0')
	{
		if (*str != sep)
		{
			word_len = 0;
			while (str[word_len] != '\0' && str[word_len] != sep)
				word_len++;
			dst[i] = ft_substr(str, 0, word_len);
			if (dst[i] == NULL)
			{
				while (i >= 0)
					free(dst[i--]);
				free(dst);
			}
			i++;
			str = str + word_len;
		}
		else
			str++;
	}
	dst[i] = NULL;
}

char	**ft_split(char const *str, char sep)
{
	char		**dst;

	if (str == NULL)
		return (NULL);
	dst = malloc(sizeof(char *) * ((wc((char *)str, sep)) + 1));
	if (dst == NULL)
		return (NULL);
	ft_splitexec(dst, str, sep);
	return (dst);
}
