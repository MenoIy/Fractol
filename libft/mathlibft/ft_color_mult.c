/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_mult.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 15:27:56 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:32:29 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

t_color	ft_color_mult(t_color color, t_color to_mult)
{
	t_color	new;
	double	r;
	double	g;
	double	b;
	double	a;

	r = color.r * to_mult.r;
	g = color.g * to_mult.g;
	b = color.b * to_mult.b;
	a = color.a * to_mult.g;
	new.r = r > 255 ? 255 : r;
	new.g = g > 255 ? 255 : g;
	new.b = b > 255 ? 255 : b;
	new.a = a > 255 ? 255 : a;
	return (new);
}
