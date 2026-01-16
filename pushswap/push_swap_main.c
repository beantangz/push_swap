/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:05:25 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/04 13:45:43 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_pile	*a;
	t_pile	*b;
	char	**ag;

	if (ac <= 1)
		return (0);
	b = NULL;
	if (ac == 2)
		ag = ft_split(av[1], ' ');
	else
		ag = av + 1;
	if (tchek_input(ag) != 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	a = ft_fill_a(ag);
	if (is_sorted(a) == 0)
		return (0);
	push_swap(&a, &b);
	free_pile(a);
	free_pile(b);
	return (0);
}
