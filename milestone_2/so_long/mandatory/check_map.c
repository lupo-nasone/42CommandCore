/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:03:33 by ecarbona          #+#    #+#             */
/*   Updated: 2025/01/08 15:14:56 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	is_simm(char **map, int l, int *i, int *j)
{
	int	r;

	r = 0;
	while (map[*i][*j] && map[*i][*j] != '\n')
		(*j)++;
	r = *j;
	while (*i < l)
	{
		*j = 0;
		while (map[*i][*j] && map[*i][*j] != '\n')
			(*j)++;
		if (r != *j)
			return (0);
		(*i)++;
	}
	return (1);
}

int	check_wall(char **map, int l)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (is_simm(map, l, &i, &j) == 0)
		return (0);
	j = 0;
	i--;
	while (map[0][j] && map[0][j] != '\n')
	{
		if (map[0][j] != '1' || map[i][j] != '1')
			return (0);
		j++;
	}
	i = 0;
	j--;
	while (i < l)
	{
		if (map[i][0] != '1' || map[i][j] != '1')
			return (0);
		i++;
	}
	return (1);
}

void	ft_clean(char **map, char *line, int fd, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(map[j]);
		j++;
	}
	free(line);
	close(fd);
}

void	ft_free_maps(char **maps)
{
	int	i;

	i = 0;
	while (maps[i])
	{
		free(maps[i]);
		i++;
	}
	free (maps);
}

void	take_p(t_game *game)
{
	int	y;
	int	x;

	y = 0;
	game->tot_score = 0;
	while (game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			if (game->map[y][x] == 'P')
			{
				game->player_x = x;
				game->player_y = y;
			}
			else if (game->map[y][x] == 'C')
				game->tot_score++;
			x++;
		}
		y++;
	}
}
