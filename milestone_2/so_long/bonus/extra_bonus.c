/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:16:28 by ecarbona          #+#    #+#             */
/*   Updated: 2025/03/03 16:33:05 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	close_window(void *param)
{
	t_game	*game;

	game = (t_game *)param;
	free_all_bonus(game->root, game);
	exit(0);
	return (0);
}