/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:16:28 by ecarbona          #+#    #+#             */
/*   Updated: 2025/03/03 16:33:16 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	move_player(t_game *game, int new_y, int new_x)
{
	if (game->map[new_y][new_x] == '1')
		return (0);
	if (game->map[new_y][new_x] == 'N')
		close_window(game);
	if (game->map[new_y][new_x] == 'C')
		game->score++;
	if (game->map[new_y][new_x] == 'E')
	{
		if (game->score == game->tot_score)
		{
			ft_printf("Hai Vinto!\n");
			close_window(game);
		}
		return (0);
	}
	game->move++;
	game->map[game->player_y][game->player_x] = '0';
	game->player_y = new_y;
	game->player_x = new_x;
	game->map[new_y][new_x] = 'P';
	return (1);
}

void	take_map(t_game *game, char *filename)
{
	char	**maps;
	int		y;
	int		x;

	maps = (char **)malloc(100 * sizeof(char *));
	if (!maps)
		return ;
	put_map_bonus(maps, filename);
	y = 0;
	x = 0;
	while (maps[y])
		y++;
	while (maps[0][x] && maps[0][x] && maps[0][x] != '\n')
		x++;
	game->map = ft_calloc((y + 1) * sizeof(char *));
	y = -1;
	while (maps[++y])
	{
		game->map[y] = ft_calloc(x + 1);
		ft_strlcpy(game->map[y], maps[y], x + 1);
	}
	game->map[y] = NULL;
	game->width = x * 40;
	game->height = y * 40;
	ft_free_maps_bonus(maps);
}

int	player_handler(int keycode, t_game *game)
{
	if (keycode == XK_w)
	{
		move_player(game, game->player_y - 1, game->player_x);
		return (2);
	}
	if (keycode == XK_s)
	{
		move_player(game, game->player_y + 1, game->player_x);
		return (3);
	}
	if (keycode == XK_a)
	{
		move_player(game, game->player_y, game->player_x - 1);
		return (1);
	}
	if (keycode == XK_d)
	{
		move_player(game, game->player_y, game->player_x + 1);
		return (4);
	}
	return (3);
}

int	key_press(int keycode, void *param)
{
	int		udlr;
	t_game	*game;

	udlr = 3;
	game = (t_game *)param;
	if (keycode == XK_Escape)
		close_window(game);
	udlr = player_handler(keycode, game);
	put_in_loop(game->root, game, udlr);
	return (0);
}

int	main(int argc, char **argv)
{
	t_root	root;
	t_game	game;

	if (argc != 2)
		return (write(1, "Invalid Argument\n", 17), 1);
	if (!is_valid_bonus(argv[1]))
		return (write(1, "Invalid Maps\n", 13), 1);
	take_map(&game, argv[1]);
	take_p_bonus(&game);
	root = (t_root){0};
	game.score = 0;
	game.move = 0;
	root.mlx = mlx_init();
	root.mlx_win = mlx_new_window(root.mlx, game.width,
			game.height, "Bonus");
	game.root = &root;
	texture_init(&root);
	put_in_loop(&root, &game, 3);
	mlx_hook(root.mlx_win, 17, 0, close_window, &game);
	mlx_key_hook(root.mlx_win, key_press, &game);
	mlx_loop(root.mlx);
}
