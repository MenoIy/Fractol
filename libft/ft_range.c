/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 13:39:38 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/20 17:17:26 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int i;
	int *array;
	int len;

	len = max - min;
	if (min >= max)
		return (NULL);
	array = (int*)malloc(sizeof(*array) * (max - min));
	i = 0;
	while (len > i)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
