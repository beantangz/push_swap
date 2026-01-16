/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manip_index2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:50:14 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 16:25:50 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_index(t_pile *a)
{
	int	index;

	index = a -> index;
	while (a != NULL)
	{
		if (a -> index > index)
			index = a -> index;
		a = a -> suivant;
	}
	return (index);
}

int	find_min_index(t_pile *a)
{
	int	index;

	index = a -> index;
	while (a != NULL)
	{
		if (a -> index < index)
			index = a -> index;
		a = a -> suivant;
	}
	return (index);
}
