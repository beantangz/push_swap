/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:05:54 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/04 13:44:39 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_pile	t_pile;
struct s_pile
{
	int		value;
	int		index;
	t_pile	*suivant;
};

t_pile	*initialisation(int valeur);
void	ajout_fin_pile(t_pile **head, int valeur);
void	ajout_debut_pile(t_pile **head, int valeur);
void	print_pile(t_pile *head);
void	delete_pile_value(t_pile **head, int valeur);
void	sa(t_pile **a);
void	sb(t_pile **b);
void	ss(t_pile **a, t_pile **b);
void	pa(t_pile **a, t_pile **b);
void	pb(t_pile **a, t_pile **b);
void	ra(t_pile **a);
void	rb(t_pile **a);
void	rr(t_pile **a, t_pile **b);
void	rra(t_pile **a);
void	rrb(t_pile **a);
void	rrr(t_pile **a, t_pile **b);
int		is_sign(char c);
int		isnumber(char *av);
int		iszero(char *av);
int		cmp(char *s1, char *s2);
int		haveduplicates(char **av);
int		tchek_input(char **av);
t_pile	*ft_fill_a(char **av);
int		tchek_min_index(t_pile **a, int valeur);
void	assigne_index(t_pile **a, int valeur, int index);
void	print_index(t_pile *a);
int		size_pile(t_pile *a);
int		position_in_t_pile(t_pile *a, t_pile *current);
int		find_index_under_in_b(t_pile *currenta, t_pile *b);
int		count_come_up_to_top(t_pile *a, int index);
int		count_come_down_to_the_top(t_pile *a, int index);
int		ft_min(int a, int b);
int		ft_max(int a, int b);
int		cost_put_both_to_the_top(t_pile *currenta, t_pile *a, t_pile *b);
int		trie(int cost_down_a, int cost_down_b, int cost_up_a, int cost_up_b);
t_pile	*min_cost_a_elt(t_pile *a, t_pile *b);
int		wich_sort(t_pile *a, t_pile *b, t_pile *min_a, int cost);
int		wich_sort_utils_a(int cost, int a_up, int a_down);
int		wich_sort_utils_b(int cost, int b_up, int b_down);
int		value_min(t_pile *a);
void	sort(t_pile **a, t_pile **b);
void	sort2(t_pile *min_a, int index_b, t_pile **a, t_pile **b);
void	do_ra(t_pile **a);
void	do_rb(t_pile **b);
void	do_rr(t_pile **a, t_pile **b);
void	do_rra(t_pile **a);
void	do_rrb(t_pile **b);
void	do_rrr(t_pile **a, t_pile **b);
void	do_sa(t_pile **a);
void	do_sb(t_pile **b);
void	do_ss(t_pile **a, t_pile **b);
void	do_pa(t_pile **a, t_pile **b);
void	do_pb(t_pile **a, t_pile **b);
void	sort3(t_pile *min_a, int index_b, t_pile **a, t_pile **b);
void	push_swap(t_pile **a, t_pile **b);
void	sort_min_mid_max(t_pile **a);
void	sort_3(int min, int mid, int max, t_pile **a);
void	finish_sort(int min, int mid, int max, t_pile **a);
int		find_max_index(t_pile *a);
int		find_min_index(t_pile *a);
int		index_in_a(t_pile *a, t_pile *b);
int		wich_sort_a(int index, t_pile *a);
void	push_back_to_a(t_pile **a, t_pile **b);
void	sorta(t_pile **a);
void	free_pile(t_pile *a);
int		is_sorted(t_pile *a);

#endif