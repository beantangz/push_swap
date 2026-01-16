/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:43:17 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 16:22:59 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rra(t_pile **a)
{
	rra(a);
	ft_printf("rra\n");
}

void	do_rrb(t_pile **b)
{
	rrb(b);
	ft_printf("rrb\n");
}

void	do_rrr(t_pile **a, t_pile **b)
{
	rrr(a, b);
	ft_printf("rrr\n");
}
