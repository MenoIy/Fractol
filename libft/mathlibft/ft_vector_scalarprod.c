/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_scalarprod.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 09:43:31 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/02 15:35:21 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

t_vector	ft_vector_scalarprod(t_vector vector, double k)
{
	t_vector	new;

	new.x = vector.x * k;
	new.y = vector.y * k;
	new.z = vector.z * k;
	new.w = vector.w * k;
	return (new);
}
