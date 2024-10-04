/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:19:11 by marvin            #+#    #+#             */
/*   Updated: 2024/10/04 15:19:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static size_t	ft_word_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s || !(tab = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!(tab[j] = ft_calloc(ft_word_len(s + i, c) + 1, sizeof(char))))
				return (NULL);
			k = 0;
			while (s[i] && s[i] != c)
				tab[j][k++] = s[i++];
			j++;
		}
		else
			i++;
	}
	return (tab);
}
