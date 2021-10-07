NAME = so_long

ALL_C = ft_close.c					ft_is_it_game.c		ft_objects_quantity.c	ft_background.c\
		ft_free_all.c				ft_map_creation.c	ft_rows_number.c		ft_check_file.c\
		ft_map_parsing.c			ft_wrong_size.c 	ft_move_up.c			ft_check_map_top_bottom.c\
		ft_move_left.c				get_next_line.c 	ft_check_map_walls.c	ft_move_right.c\
		ft_move_down.c				get_next_line_utils.c						main.c\
		ft_player.c					ft_collectible.c	ft_exit.c				ft_walls.c\
		ft_button_press.c			ft_map_picture.c	ft_get_player_position.c	ft_action.c\
		ft_steps_string.c			ft_map_dell.c		ft_winner.c				ft_game_window.c\
		ft_enemy_animation.c		ft_player_right_animation.c					ft_player_left_animation.c\
		ft_enemy.c					ft_itoa.c			ft_putstr.c 			ft_game_over.c

HEADER = so_long.h

LIB = libmlx.a

OBJ = $(patsubst %.c,%.o,$(ALL_C))

FLAGS = -Wall -Werror -Wextra

all: $(NAME)


$(NAME): $(OBJ)
		gcc $(FLAGS) $(OBJ) -Lmlx $(LIB) -framework OpenGL -framework AppKit -o $(NAME)

%.o : %.c
		gcc $(FLAGS) -Imlx -c $< -o $@

$(OBJ): $(HEADER)

bonus: re

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re