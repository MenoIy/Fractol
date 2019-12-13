# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdaou <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/18 17:26:52 by kdaou             #+#    #+#              #
#    Updated: 2019/07/20 11:45:19 by kdaou            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
FLAG = -Wall -Wextra -Werror
FRCT =	ft_fractol.c\
		ft_fractol_color.c\
		ft_fractol_color2.c\
		ft_fractol_itteration.c\
		ft_fractol_itteration2.c\
		ft_fractol_management.c\
		ft_key_event.c\
		ft_mouse_event.c\
		main.c
LIBFT = libft/libft.a
SRCS = $(addprefix fractol_srcs/,$(FRCT))
OBJS = $(SRCS:.c=.o)

INC = -I includes/ -I /usr/local/Include 
INC_SRCS = includes/libft.h includes/ft_mlx.h includes/fractol.h includes/mathlibft.h
all: $(NAME)

$(NAME): $(OBJS)
	@make -C libft
	@gcc $(OBJS) $(LIBFT) -o $(NAME) -L /usr/local/lib -lmlx -framework OpenGL -framework AppKit $

$(OBJS): %.o : %.c $(INC_SRCS)
	gcc -o $@ -c $< $(FLAG) $(INC)
	
clean:
	@make -C libft/ clean
	@rm -f $(OBJS)

fclean: clean
	@make -C libft/ fclean
	@rm -f $(NAME)
re: fclean all
