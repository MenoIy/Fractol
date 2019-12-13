/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:15:10 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 10:14:14 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

t_color	ft_color_add(t_color color, t_color to_add)
{
	t_color	res;

	res.r = (unsigned char)(color.r + to_add.r) / 2;
	res.g = (unsigned char)(color.g + to_add.g) / 2;
	res.b = (unsigned char)(color.b + to_add.b) / 2;
	res.a = (unsigned char)(color.a + to_add.a) / 2;
	return (res);
}
