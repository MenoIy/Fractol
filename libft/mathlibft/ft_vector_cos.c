/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_cos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 09:45:42 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/02 10:38:42 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

double	ft_vector_cos(t_vector a, t_vector b)
{
	return (ft_vector_dotprod(a, b) /
			(ft_vector_magnitude(a) * ft_vector_magnitude(b)));
}
