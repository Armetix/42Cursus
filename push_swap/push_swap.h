/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:31:32 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/17 12:52:25 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "printf/includes/ft_printf.h"
# include "printf/includes/libft.h"

typedef struct s_pile
{
	long			nombre;
	long			index;
	struct s_pile	*next;
	struct s_pile	*prev;
}	t_pile;

void	ft_sa(t_pile **pile_a, int nb);
void	ft_sb(t_pile **pile_b, int nb);
void	ft_ss(t_pile **pile_a, t_pile **pile_b);
void	ft_ra(t_pile **pile_a, int nb);
void	ft_rb(t_pile **pile_b, int nb);
void	ft_rr(t_pile **pile_a, t_pile **pile_b);
void	ft_rra(t_pile **pile_a, int nb);
void	ft_rrb(t_pile **pile_b, int nb);
void	ft_rrr(t_pile **pile_a, t_pile **pile_b);
void	ft_pa(t_pile **pile_a, t_pile **pile_b);
void	ft_pb(t_pile **pile_a, t_pile **pile_b);

t_pile	*ft_create_pile_a(char **argv, int i);

void	ft_sort(t_pile **a);
void	ft_sort_three(t_pile **a);
void	ft_free_pile(t_pile **lst);
void	ft_free_str(char **str);
void	ft_error(void);
void	ft_check_arg(char **argv);
int		ft_check_dup(t_pile *lst);
int		ft_check_sort(t_pile *a);
int		ft_pile_size(t_pile *lst);
int		ft_max(t_pile *lst);
int		ft_min(t_pile *lst);
int		ft_index(t_pile *lst, int nb);
int		ft_find_nb_place_b(t_pile *b, int nb);
int		ft_find_nb_place_a(t_pile *a, int nb);
int		ft_rotate_type_a_b(t_pile *a, t_pile *b);
int		ft_rotate_type_b_a(t_pile *a, t_pile *b);
t_pile	*ft_sort_b(t_pile **a);
t_pile	**ft_sort_a(t_pile **a, t_pile **b);
t_pile	*ft_last(t_pile *lst);

int		ft_case_ra_rb(t_pile *a, t_pile *b, int nb);
int		ft_case_rra_rrb(t_pile *a, t_pile *b, int nb);
int		ft_case_rra_rb(t_pile *a, t_pile *b, int nb);
int		ft_case_ra_rrb(t_pile *a, t_pile *b, int nb);

int		ft_case_ra_rb_a(t_pile *a, t_pile *b, int nb);
int		ft_case_rra_rrb_a(t_pile *a, t_pile *b, int nb);
int		ft_case_rra_rb_a(t_pile *a, t_pile *b, int nb);
int		ft_case_ra_rrb_a(t_pile *a, t_pile *b, int nb);

int		ft_apply_ra_rb(t_pile **a, t_pile **b, int nb, char c);
int		ft_apply_rra_rrb(t_pile **a, t_pile **b, int nb, char c);
int		ft_apply_rra_rb(t_pile **a, t_pile **b, int nb, char s);
int		ft_apply_ra_rrb(t_pile **a, t_pile **b, int nb, char s);

//void	ft_show_pile(t_pile *lst);

#endif