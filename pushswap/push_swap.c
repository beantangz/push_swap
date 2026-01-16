/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 22:06:29 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 16:48:15 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_pile **a, t_pile **b)
{
	if (size_pile(*a) <= 3)
	{
		if (size_pile(*a) == 3)
			sort_min_mid_max(a);
		if (size_pile(*a) != 1)
			sorta(a);
		return ;
	}
	*b = initialisation(0);
	delete_pile_value(b, 0);
	do_pb(a, b);
	if (size_pile(*a) > 3)
		do_pb(a, b);
	while (size_pile(*a) > 3)
	{
		sort(a, b);
		do_pb(a, b);
	}
	sort_min_mid_max(a);
	while (size_pile(*b) > 0)
		push_back_to_a(a, b);
	sorta(a);
}
