cmake_minimum_required(VERSION 3.19)
project(3_so_long C)

set(CMAKE_C_STANDARD 11)

add_executable(3_so_long
        main.c
        so_long.h
        get_next_line.c
        ft_putstr.c
        ft_check_map_top_bottom.c
        ft_check_map_walls.c
        ft_map_parsing.c
        ft_free_all.c
        get_next_line_utils.c
        ft_rows_number.c
        ft_map_creation.c
        ft_wrong_size.c
        ft_is_it_game.c
        ft_check_file.c
        ft_background.c
        ft_move_right.c
        ft_move_left.c
        ft_game_over.c
        ft_close.c
        ft_walls.c
        ft_collectible.c
        ft_enemy.c
        ft_exit.c
        ft_player.c
        ft_button_press.c
        ft_move_down.c
        ft_move_up.c
        ft_objects_quantity.c
        ft_map_picture.c
        ft_get_player_position.c
        ft_action.c
        ft_itoa.c
        ft_steps_string.c
        ft_map_dell.c
        ft_winner.c
        ft_enemy_animation.c
        ft_player_right_animation.c
        ft_player_left_animation.c ft_game_window.c)
