/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_scale.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:31:58 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:32:46 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

t_color	ft_color_scale(t_color color, double scale)
{
	t_color	new;
	double	r;
	double	g;
	double	b;
	double	a;

	r = color.r * scale;
	g = color.g * scale;
	b = color.b * scale;
	a = color.a * scale;
	new.r = r > 255 ? 255 : r;
	new.g = g > 255 ? 255 : g;
	new.b = b > 255 ? 255 : b;
	new.a = a > 255 ? 255 : a;
	return (new);
}
