# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdaou <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/25 09:53:11 by kdaou             #+#    #+#              #
#    Updated: 2019/07/20 11:45:23 by kdaou            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBFT_SRCS = ft_atof.c\
			 ft_atoi.c\
			 ft_bzero.c\
			 ft_digitlen.c\
			 ft_isalnum.c\
			 ft_isalpha.c\
			 ft_isascii.c\
			 ft_isdigit.c\
			 ft_isprint.c\
			 ft_itoa.c\
			 ft_itoa_base.c\
			 ft_list_sort.c\
			 ft_listlast.c\
			 ft_listsize.c\
			 ft_lst_at.c\
			 ft_lstadd.c\
			 ft_lstadd_end.c\
			 ft_lstdel.c\
			 ft_lstdelone.c\
			 ft_lstiter.c\
			 ft_lstmap.c\
			 ft_lstnew.c\
			 ft_memalloc.c\
			 ft_memccpy.c\
			 ft_memchr.c\
			 ft_memcmp.c\
			 ft_memcpy.c\
			 ft_memdel.c\
			 ft_memmove.c\
			 ft_memset.c\
			 ft_numlen.c\
			 ft_putchar.c\
			 ft_putchar_fd.c\
			 ft_putendl.c\
			 ft_putendl_fd.c\
			 ft_putnbr.c\
			 ft_putnbr_base.c\
			 ft_putnbr_fd.c\
			 ft_putnbrmax.c\
			 ft_putstr.c\
			 ft_putstr_fd.c\
			 ft_range.c\
			 ft_strcat.c\
			 ft_strchr.c\
			 ft_strclr.c\
			 ft_strcmp.c\
			 ft_strcpy.c\
			 ft_strdel.c\
			 ft_strdup.c\
			 ft_strequ.c\
			 ft_striter.c\
			 ft_striteri.c\
			 ft_strjoin.c\
			 ft_strlcat.c\
			 ft_strlen.c\
			 ft_strmap.c\
			 ft_strmapi.c\
			 ft_strncat.c\
			 ft_strncmp.c\
			 ft_strncpy.c\
			 ft_strnequ.c\
			 ft_strnew.c\
			 ft_strnstr.c\
			 ft_strrchr.c\
			 ft_strsplit.c\
			 ft_strstr.c\
			 ft_strsub.c\
			 ft_strtrim.c\
			 ft_swap.c\
			 ft_swap_str.c\
			 ft_tolower.c\
			 ft_toupper.c\
			 ft_wordcalc.c\
			 get_next_line.c\
			 ft_free_table.c\
			 ft_table_len.c\
			 ft_max.c\
			 ft_strpos.c\
			 ft_dbllstnew.c\
			 ft_dbllstadd_end.c\
			 ft_map.c

MATHLIBFT =	ft_color_add.c\
			ft_color_copy.c\
			ft_color_create.c\
			ft_color_scale.c\
			ft_color_mult.c\
			ft_color_toint.c\
			ft_color_gradient.c\
			ft_color_fromint.c\
			ft_color_palette.c\
			ft_vector_add.c\
			ft_vector_copy.c\
			ft_vector_cos.c\
			ft_vector_create.c\
			ft_vector_dotprod.c\
			ft_vector_magnitude.c\
			ft_vector_normalize.c\
			ft_vector_scalarprod.c\
			ft_vector_sub.c\
			ft_vector_crossprod.c

FT_MLX =	ft_draw_img.c\
			ft_new_setup.c\
			ft_mlx_clear_img.c\
			ft_supershapes.c\
			ft_thread_management.c


MATHLIBFT_SRCS = $(addprefix mathlibft/,$(MATHLIBFT))
FT_MLX_SRCS = $(addprefix ft_mlx/,$(FT_MLX))
SRCS = $(LIBFT_SRCS) $(MATHLIBFT_SRCS) $(FT_MLX_SRCS)

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

INC = -I ../includes/
INC_SRCS =  ../includes/libft.h ../includes/mathlibft.h ../includes/ft_mlx.h

all: $(NAME)

$(NAME): $(OBJS)
	@ar cr $(NAME) $(OBJS)

$(OBJS): %.o : %.c $(INC_SRCS)
	gcc -o $@ -c $< $(FLAGS) $(INC)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
