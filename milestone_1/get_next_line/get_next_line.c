/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:46:55 by mafagina          #+#    #+#             */
/*   Updated: 2024/12/12 17:46:56 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_read(int fd, char **str, char *buffer)
{
	int		bytes_read;
	char	*tmp;

	ft_bzero(buffer, BUFFER_SIZE + 1);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read < 0 || buffer == NULL)
	{
		free(*str);
		*str = NULL;
		return (-1);
	}
	if (bytes_read == 0)
		return (bytes_read);
	tmp = ft_strjoin(*str, buffer);
	free (*str);
	*str = tmp;
	return (bytes_read);
}

static void	get_result(char **str, char **result)
{
	size_t	i;
	size_t	len;
	char	*diff;

	diff = ft_strchr(*str, '\n');
	len = ft_strlen(*str) - ft_strlen(diff) + 2;
	*result = malloc(len);
	if (!result)
		return ;
	i = 0;
	while (i < len - 1)
	{
		(*result)[i] = (*str)[i];
		i++;
	}
	(*result)[i] = '\0';
}

static void	del_string(char **str)
{
	char	*tmp;
	size_t	i;
	size_t	j;

	if (!ft_strchr(*str, '\n'))
	{
		free(*str);
		*str = NULL;
		return ;
	}
	tmp = malloc((ft_strlen(ft_strchr(*str, '\n'))) * sizeof(char));
	if (!tmp)
		return ;
	i = 0;
	j = ft_strlen(*str) - ft_strlen(ft_strchr(*str, '\n')) + 1;
	while (j < ft_strlen(*str))
		tmp[i++] = (*str)[j++];
	tmp[i] = '\0';
	free(*str);
	*str = tmp;
	if (**str == 0)
	{
		free(*str);
		*str = NULL;
	}
}

char	*get_next_line(int fd)
{
	static char	*string;
	char		*result;
	char		*buffer;
	int			bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	bytes_read = 1;
	while (ft_strchr(string, '\n') == NULL && bytes_read > 0)
		bytes_read = ft_read(fd, &string, buffer);
	free(buffer);
	if (bytes_read == -1)
		return (NULL);
	if (ft_strlen(string) == 0)
		return (NULL);
	get_result(&string, &result);
	del_string(&string);
	return (result);
}

// int main()
// {
// 	int	fd = open("filefd.txt", O_RDONLY);
// 	char *line;
// 	line = get_next_line(fd);
// 	printf("%d\n", fd);
// 	printf("%s\n", line);
// 	free (line);
// 	close (fd);
// 	return (0);
// }