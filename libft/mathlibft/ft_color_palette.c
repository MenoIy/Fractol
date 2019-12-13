/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_palette.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:30:37 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:30:55 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

t_color		ft_color_palette(int indice)
{
	t_color	color[22];

	color[0] = ft_color_fromint(0x2b4389);
	color[1] = ft_color_fromint(0x364b8d);
	color[2] = ft_color_fromint(0x3f5390);
	color[3] = ft_color_fromint(0x485c93);
	color[4] = ft_color_fromint(0x506496);
	color[5] = ft_color_fromint(0x586d98);
	color[6] = ft_color_fromint(0x60759b);
	color[7] = ft_color_fromint(0x687e9d);
	color[8] = ft_color_fromint(0x71879e);
	color[9] = ft_color_fromint(0x7990a0);
	color[10] = ft_color_fromint(0x8199a1);
	color[11] = ft_color_fromint(0x89a2a1);
	color[12] = ft_color_fromint(0x91aba1);
	color[13] = ft_color_fromint(0x9ab5a1);
	color[14] = ft_color_fromint(0xa3be9f);
	color[15] = ft_color_fromint(0xacc89d);
	color[16] = ft_color_fromint(0xb51999);
	color[17] = ft_color_fromint(0xbfda94);
	color[18] = ft_color_fromint(0xc9e48c);
	color[19] = ft_color_fromint(0xd4ed81);
	color[20] = ft_color_fromint(0xe0f76e);
	color[21] = ft_color_fromint(0xf3ff2c);
	return (color[indice]);
}
