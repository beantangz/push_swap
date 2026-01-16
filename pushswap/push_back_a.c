/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:33:46 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 16:25:33 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//si tu vas etre le plus grand de a -> envoie sur le plus petit
//sinon envoie sur celui just au dessus

int	index_in_a(t_pile *a, t_pile *b)
{
	int	index_b;
	int	index_upper_a;

	index_upper_a = find_max_index(a);
	index_b = b -> index;
	if (index_b > index_upper_a)
		return (find_min_index(a));
	while (a != NULL)
	{
		if (a -> index > index_b && a -> index < index_upper_a)
			index_upper_a = a -> index;
		a = a -> suivant;
	}
	return (index_upper_a);
}

int	wich_sort_a(int index, t_pile *a)
{
	int	cost_down;
	int	cost_up;
	int	first_index;

	cost_down = 0;
	cost_up = 0;
	first_index = a -> index;
	while (a -> index != index)
	{
		a = a -> suivant;
		cost_up++;
	}
	while (a != NULL)
	{
		a = a -> suivant;
		cost_down++;
	}
	if (cost_up < cost_down + 1)
		return (0);
	return (1);
}

void	push_back_to_a(t_pile **a, t_pile **b)
{
	int	wich_sort;
	int	index_a;

	index_a = index_in_a(*a, *b);
	wich_sort = wich_sort_a(index_a, *a);
	if (wich_sort == 0)
	{
		while ((*a)-> index != index_a)
			do_ra(a);
	}
	if (wich_sort == 1)
	{
		while ((*a)-> index != index_a)
			do_rra(a);
	}
	do_pa(a, b);
}
