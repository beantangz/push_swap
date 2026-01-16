/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_s_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:46:16 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 16:23:06 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_sa(t_pile **a)
{
	sa(a);
	ft_printf("sa\n");
}

void	do_sb(t_pile **b)
{
	sb(b);
	ft_printf("sb\n");
}

void	do_ss(t_pile **a, t_pile **b)
{
	ss(a, b);
	ft_printf("ss\n");
}

void	do_pa(t_pile **a, t_pile **b)
{
	pa(a, b);
	ft_printf("pa\n");
}

void	do_pb(t_pile **a, t_pile **b)
{
	pb(a, b);
	ft_printf("pb\n");
}
