/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_texture_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:12:51 by ecarbona          #+#    #+#             */
/*   Updated: 2025/03/03 16:28:09 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	texture_load(t_root *root, t_img **img, char *path)
{
	int	width;
	int	height;

	*img = mlx_xpm_file_to_image(root->mlx, path, &width, &height);
	(*img)->width = width;
	(*img)->height = height;
}

void	texture_init(t_root *root)
{
	texture_load(root, &root->player, "./textures/player.xpm");
	texture_load(root, &root->left, "./textures/left.xpm");
	texture_load(root, &root->right, "./textures/right.xpm");
	texture_load(root, &root->back, "./textures/back.xpm");
	texture_load(root, &root->enemy, "./textures/enemy.xpm");
	texture_load(root, &root->exit, "./textures/key.xpm");
	texture_load(root, &root->coll, "./textures/coin.xpm");
	texture_load(root, &root->wall, "./textures/wall.xpm");
	texture_load(root, &root->ground, "./textures/sand.xpm");
}

void	put_map_with_textures_bonus(t_root *root, t_game *game)
{
	int	y;
	int	x;

	y = 0;
	while ((y * 40) < game->height)
	{
		x = 0;
		while ((x * 40) < game->width)
		{
			if (game->map[y][x] == '1')
				PUT_IM(root->mlx, root->mlx_win, root->wall, x * 40, y * 40);
			else if (game->map[y][x] == 'C')
				PUT_IM(root->mlx, root->mlx_win, root->coll, x * 40, y * 40);
			else if (game->map[y][x] == 'E' && game->score == game->tot_score)
				PUT_IM(root->mlx, root->mlx_win, root->exit, x * 40, y * 40);
			else if (game->map[y][x] == 'N')
				PUT_IM(root->mlx, root->mlx_win, root->enemy, x * 40, y * 40);
			else
				PUT_IM(root->mlx, root->mlx_win, root->ground, x * 40, y * 40);
			x++;
		}
		y++;
	}
}

void	put_in_loop(t_root *root, t_game *game, int udlr)
{
	char	*mosse;
	void	*player_texture;

	put_map_with_textures_bonus(root, game);
	mosse = ft_itoa(game->move);
	mlx_string_put(root->mlx, root->mlx_win, 10, 20, 0xFFFFFF, "Mosse: ");
	mlx_string_put(root->mlx, root->mlx_win, 50, 20, 0xFFFFFF, mosse);
	free(mosse);
	if (udlr == 1)
		player_texture = root->left;
	if (udlr == 2)
		player_texture = root->back;
	if (udlr == 3)
		player_texture = root->player;
	if (udlr == 4)
		player_texture = root->right;
	mlx_put_image_to_window(root->mlx, root->mlx_win, player_texture,
		game->player_x * 40, game->player_y * 40);
}
