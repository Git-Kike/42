/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:32:09 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/07 14:49:51 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/* void to_upper(unsigned int index, char *c)
{
    (void)index;

    if (*c >= 'a' && *c <= 'z')
        *c = *c - ('a' - 'A');
}

int main(void)
{
    char str[] = "hola mundo";

    printf("Antes: %s\n", str);

    ft_striteri(str, to_upper);
    printf("Después: %s\n", str);

    return 0;
} */