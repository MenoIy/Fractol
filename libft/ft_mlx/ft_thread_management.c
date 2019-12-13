/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_thread_management.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 18:07:55 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:37:03 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mlx.h"

int	ft_thread_gestion(void *data, void *(*f)(void*),
		int thread_number, int size)
{
	int				i;
	pthread_t		thread[thread_number];
	t_thread_data	thread_data[thread_number];

	i = -1;
	while (++i < thread_number)
	{
		thread_data[i].data = data;
		thread_data[i].min = i * (size / 4);
		thread_data[i].max = (i + 1) * (size / 4);
		if (pthread_create(&thread[i], NULL, f, &thread_data[i]))
		{
			ft_putendl_fd("error : pthread_create", 2);
			return (0);
		}
	}
	i = -1;
	while (++i < thread_number)
		if (pthread_join(thread[i], NULL))
		{
			ft_putendl_fd("error : pthread_join", 2);
			return (0);
		}
	return (1);
}
