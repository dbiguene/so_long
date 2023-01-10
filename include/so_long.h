/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbiguene <dbiguene@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:52:19 by dbiguene          #+#    #+#             */
/*   Updated: 2023/01/05 15:55:20 by dbiguene         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# ifndef TYPEDEFS_H
#  include "typedefs.h"
# endif

# include "../slx/include/slx.h"
# include "player.h"
# include "map.h"
# include "move.h"

t_game			parse_map(char *path);
t_slx_coords	get_pos(t_game game, char c);
#endif
