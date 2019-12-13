/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_toint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 14:26:39 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/03 14:32:54 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

int	ft_color_toint(t_color color)
{
	int ret;
	int r;
	int g;
	int b;
	int a;

	r = (int)color.r;
	g = (int)color.g;
	b = (int)color.b;
	a = (int)color.a;
	ret = r << 16 | g << 8 | b | a << 24;
	return (ret);
}
