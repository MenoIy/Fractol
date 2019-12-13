/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:28:33 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/02 10:38:06 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

t_color	ft_color_copy(t_color color)
{
	t_color	copy;

	copy.r = color.r;
	copy.g = color.g;
	copy.b = color.b;
	copy.a = color.a;
	return (copy);
}
