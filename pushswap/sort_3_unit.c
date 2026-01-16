/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_unit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 22:08:54 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 16:24:53 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_min_mid_max(t_pile **a)
{
	int		min;
	int		max;
	t_pile	*temp;

	min = (*a)-> value;
	max = (*a)-> value;
	temp = *a;
	while (temp != NULL)
	{
		if (temp -> value < min)
			min = temp -> value;
		temp = temp -> suivant;
	}
	temp = *a;
	while (temp != NULL)
	{
		if (temp -> value > max)
			max = temp -> value;
		temp = temp -> suivant;
	}
	temp = *a;
	while (temp -> value == max || temp -> value == min)
		temp = temp -> suivant;
	sort_3(min, temp -> value, max, a);
}

void	sort_3(int min, int mid, int max, t_pile **a)
{
	if ((*a)-> value == min)
	{
		if ((*a)-> suivant -> value == max)
		{
			do_rra(a);
			do_sa(a);
			return ;
		}
	}
	if ((*a)-> suivant -> value == min)
	{
		if ((*a)-> value == mid)
		{	
			do_sa(a);
			return ;
		}
		if ((*a)-> value == max)
			do_ra(a);
		return ;
	}
	else
		finish_sort(min, mid, max, a);
}

void	finish_sort(int min, int mid, int max, t_pile **a)
{
	if ((*a)-> suivant -> suivant -> value == min)
	{
		if ((*a)-> value == mid)
		{	
			do_rra(a);
			return ;
		}
		if ((*a)-> value == max)
		{
			do_sa(a);
			do_rra(a);
		}
	}
}
