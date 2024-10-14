/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:18:14 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/02 15:18:33 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*substr;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	return (substr);
}
/* int main(void)
{
    const char *str = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *result = ft_substr(str, start, len);
    if (result)
    {
        printf("Substring: %s\n", result);
        free(result);
    }
    else
    {
        printf("Error: ft_substr returned NULL\n");
    }
    return 0;
} */