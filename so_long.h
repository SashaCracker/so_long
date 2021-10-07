/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:09:18 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:09:20 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include "mlx.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# define UP 126
# define DOWN 125
# define LEFT 123
# define RIGHT 124
# define ESCAPE 53
# define W 13
# define A 0
# define S 1
# define D 2

typedef struct s_info	t_info;
struct	s_info
{
	int		E;
	int		P;
	int		C;
	int		V;
	void	*mlx;
	void	*mlx_win;
	int		step;
	int		len;
	int		rows;
	int		width;
	int		height;
	int		x;
	int		y;
	char	**map;
	int		counter_player;
	int		counter_enemy;
	int		eggs;
	int		left;
	int		right;
	int		up;
	int		down;
	int		the_end;
};

int		ft_rows_number(char *argv);
char	**ft_map_creation(char *argv, int rows);
int		ft_map_parsing(t_info *info);
int		ft_wrong_size(int len, int len_next, int row);
int		ft_check_map_top_bottom(char *line);
int		ft_check_map_walls(char *line);
int		ft_is_it_game(t_info *info);
int		ft_check_file(char *argv);
void	ft_putstr(char *str);
void	ft_free_all(t_info *info);
int		get_next_line(int fd, char **line);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);
char	*ft_strchr(char *s, int c);
void	ft_background(t_info *info);
void	ft_game_over(t_info *info);
int		ft_close(t_info *info);
void	ft_walls(t_info *info);
void	ft_collectible(t_info *info);
void	ft_enemy(t_info *info);
void	ft_exit(t_info *info);
void	ft_player(t_info *info);
int		ft_button_press(int keycode, t_info *info);
void	ft_objects_quantity(t_info *info);
void	ft_move_down(t_info *info);
void	ft_move_up(t_info *info);
void	ft_move_right(t_info *info);
void	ft_move_left(t_info *info);
int		ft_map_picture(t_info *info);
void	ft_get_player_position(t_info *info);
int		ft_action(t_info *info);
char	*ft_itoa(int n);
void	ft_steps_string(t_info *info);
void	ft_map_dell(t_info *info);
void	ft_winner(t_info *info);
void	ft_enemy_animation(t_info *info, int i, int j);
void	ft_player_right_animation(t_info *info, int i, int j);
void	ft_player_left_animation(t_info *info, int i, int j);
void	ft_game_window(t_info *info);

#endif
