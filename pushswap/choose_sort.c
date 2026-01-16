/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:33:02 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 16:10:49 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	wich_sort(t_pile *a, t_pile *b, t_pile *min_a, int cost)
{
	int		index_in_b;
	int		cost_up_a;
	int		cost_down_a;
	int		cost_down_b;
	int		cost_up_b;

	index_in_b = find_index_under_in_b(min_a, b);
	cost_up_a = count_come_up_to_top(a, min_a -> index);
	cost_down_a = count_come_down_to_the_top(a, min_a -> index);
	cost_up_b = count_come_up_to_top(b, index_in_b);
	cost_down_b = count_come_down_to_the_top(b, index_in_b);
	if (cost_up_a + cost_down_b == cost)
		return (4);
	if (cost_down_a + cost_up_b == cost)
		return (5);
	if (wich_sort_utils_a(cost, cost_up_a, cost_down_a) != -1)
		return (wich_sort_utils_a(cost, cost_up_a, cost_down_a));
	else
		return (wich_sort_utils_b(cost, cost_up_b, cost_down_b));
}

int	wich_sort_utils_a(int cost, int a_up, int a_down)
{
	if (a_up == cost)
		return (0);
	if (a_down == cost)
		return (1);
	return (-1);
}

int	wich_sort_utils_b(int cost, int b_up, int b_down)
{
	if (b_up == cost)
		return (2);
	if (b_down == cost)
		return (3);
	return (-1);
}
