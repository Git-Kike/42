/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:07:02 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/27 19:07:02 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*_fill_line_from_fd(int fd, char *remaining_buffer, char *buffer);
static char	*_update_remaining_buffer(char *line);
static char	*ft_strchr(char *s, int c);

char	*get_next_line(int fd)
{
	static char	*remaining_buffer;
	char		*line;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(remaining_buffer);
		remaining_buffer = NULL;
		return (NULL);
	}
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	line = _fill_line_from_fd(fd, remaining_buffer, buffer);
	free(buffer);
	if (!line)
		return (NULL);
	remaining_buffer = _update_remaining_buffer(line);
	return (line);
}

static char	*_update_remaining_buffer(char *line_buffer)
{
	char		*remaining_buffer;
	ssize_t		i;

	if (!line_buffer)
		return (NULL);
	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	if (line_buffer[i] == 0 || line_buffer[1] == 0)
		return (NULL);
	remaining_buffer = ft_substr(line_buffer, i + 1,
			ft_strlen(line_buffer) - i);
	if (!remaining_buffer || *remaining_buffer == 0)
	{
		free(remaining_buffer);
		remaining_buffer = NULL;
	}
	line_buffer[i + 1] = 0;
	return (remaining_buffer);
}

static char	*_fill_line_from_fd(int fd, char *remaining_buffer, char *buffer)
{
	ssize_t		b_read;
	char		*tmp;

	b_read = 1;
	while (b_read > 0)
	{
		b_read = read(fd, buffer, BUFFER_SIZE);
		if (b_read == -1)
		{
			free(remaining_buffer);
			return (NULL);
		}
		else if (b_read == 0)
			break ;
		buffer[b_read] = 0;
		if (!remaining_buffer)
			remaining_buffer = ft_strdup("");
		tmp = remaining_buffer;
		remaining_buffer = ft_strjoin(tmp, buffer);
		free(tmp);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (remaining_buffer);
}

static char	*ft_strchr(char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}

/* int	main (){
	char	*str;
	int		fd;
	fd = open("get_next_line.c", O_RDONLY);
	while((str=get_next_line(fd))!=NULL){
		printf("%s", str);
		free(str);
	}
	free(str);
	close(fd);
	return (0);
} */