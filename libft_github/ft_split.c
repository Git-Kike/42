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

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*get_next_word(char const *s, char c, int *start)
{
	int		len;
	char	*word;

	while (s[*start] == c)
		(*start)++;
	len = 0;
	while (s[*start + len] && s[*start + len] != c)
		len++;
	word = ft_substr(s, *start, len);
	*start += len;
	return (word);
}

static void	free_result(char **result, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	int		i;
	int		start;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	start = 0;
	while (i < words)
	{
		result[i] = get_next_word(s, c, &start);
		if (!result[i])
		{
			free_result(result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str = "Hola,mundo,esto,es,una,prueba";
	char	**result;
	int		i;

	result = ft_split(str, ',');
	if (!result)
	{
		printf("Error: ft_split falló\n");
		return (1);
	}

	i = 0;
	while (result[i])
	{
		printf("Palabra %d: %s\n", i + 1, result[i]);
		free(result[i]);
		i++;
	}
	free(result);

	return (0);
}*/