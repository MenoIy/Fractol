/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:09:18 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/04 18:36:26 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

t_color	ft_color_create(double r, double g, double b, double a)
{
	t_color	color;

	color.r = r;
	color.g = g;
	color.b = b;
	color.a = a;
	return (color);
}
