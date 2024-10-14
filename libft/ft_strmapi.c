/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:25:06 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/07 14:30:15 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s || !f)
		return (NULL);
	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/* char my_toupper(unsigned int index, char c) // Mantener la firma
{
    (void)index; // Ignoramos el parámetro 'index' para evitar advertencias
    return (char)ft_toupper((int)c);
}

int main(void)
{
    char *s = "Hello";
    char *res;

    // Pasamos la función correctamente sin necesidad de un casting
    res = ft_strmapi(s, my_toupper);
    printf("%s\n", res);
    free(res); // Liberar la memoria
    return 0;
} */
