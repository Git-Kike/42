/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:51:43 by marvin            #+#    #+#             */
/*   Updated: 2024/10/01 13:51:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(s1) + 1;
	dest = (char *)malloc(len);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1, len);
	return (dest);
}
/* int main()
{
	char *s1 = "Hello World!";
	char *s2 = ft_strdup(s1);
	printf("%s\n", s2);
	return 0;
} */
