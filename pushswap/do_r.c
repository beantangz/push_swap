/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:40:53 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 16:22:52 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_ra(t_pile **a)
{
	ra(a);
	ft_printf("ra\n");
}

void	do_rb(t_pile **b)
{
	rb(b);
	ft_printf("rb\n");
}

void	do_rr(t_pile **a, t_pile **b)
{
	rr(a, b);
	ft_printf("rr\n");
}
