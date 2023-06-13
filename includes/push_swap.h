/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:47:19 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/13 09:45:09 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// =======================================================================
//								Includes
// =======================================================================

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <limits.h>
# include <string.h>
# include <stdint.h>
# include <stdarg.h>

// =======================================================================
//								Colors
// =======================================================================

# define BLACK "\001\033[1;30m\002"
# define RED "\001\033[1;31m\002"
# define GREEN "\001\033[1;32m\002"
# define YELLOW "\001\033[1;33m\002"
# define BLUE "\001\033[1;34m\002"
# define PURPLE "\001\033[1;35m\002"
# define CYAN "\001\033[1;36m\002"
# define WHITE "\001\033[1;37m\002"
# define RESET "\001\033[0m\002"

// =======================================================================
//								list
// =======================================================================

typedef struct s_list_a
{
	int					num;
	struct s_list_a		*next;
}	t_list_a;

typedef struct s_list_b
{
	int					num;
	struct s_list_b		*next;
}	t_list_b;

typedef struct s_struct
{
	struct s_list_a	*la;
	struct s_list_b	*lb;
}					t_struct;

// =======================================================================
//								Function List_A
// =======================================================================

t_list_a	*ft_createcell_a(int nb);
t_list_a	*ft_first_la(t_struct *data);
t_list_a	*ft_addata(t_struct *data, int nb, int pos);
int			ft_print_lista(t_struct *data);
void		ft_free_lista(t_struct *data);
int			ft_len_lista(t_struct *data);
int			ft_getata(t_struct *data, int pos);
t_list_a	*ft_freeata(t_struct *data, int pos);
t_struct	*ft_init_struct(t_struct *data);

// =======================================================================
//								Function List_B
// =======================================================================

t_list_b	*ft_createcell_b(int nb);
t_list_b	*ft_first_lb(t_struct *data);
t_list_b	*ft_addatb(t_struct *data, int nb, int pos);
int			ft_print_listb(t_struct *data);
void		ft_free_listb(t_struct *data);
int			ft_len_listb(t_struct *data);
int			ft_getatb(t_struct *data, int pos);
void		ft_free_both(t_list_a *la, t_list_b *lb);
t_list_b	*ft_freeatb(t_struct *data, int pos);

// =======================================================================
//								Libft
// =======================================================================

int			ft_isdigit(int c);
int			ft_strlen(char *s);
int			ft_atoi(char *nptr);
long		ft_atol(char *nptr);
void		ft_putstr_fd(char *s, int fd);
int			ft_putchar(char c);
void		ft_putnbr_base(unsigned int nbr, const char format);
int			ft_putstr(char *s);
int			ft_putnbr(int nbr);
int			ft_printf(const char *str, ...);
int			ft_strlen(char *str);
int			ft_count_base(unsigned int nbr);
int			ft_count(int nbr);
int			ft_putnbr_unsigned(unsigned int nbr);
int			ft_unsigned_count(unsigned int nbr);
int			ft_count_help(unsigned long long nbr, int cpt);
int			ft_ptr_len(uintptr_t num);
void		ft_put_ptr(uintptr_t num);
int			ft_print_ptr(unsigned long long ptr);
char		*ft_itoa(int n);
int			ft_print_hex(unsigned int nbr, const char format);
char		**ft_strlcpy(char **src);
int			*ft_swap(int *a, int ind1, int ind2);

// =======================================================================
//								Parsing 
// =======================================================================

bool		ft_verif_input(char **argv);
bool		ft_verif_existing(int argc);
bool		ft_verif_duplicate(char **argv);
bool		ft_verif_int(char *argv);
int			ft_parsing_manager(int argc, char **argv);
bool		ft_check_var(char **argv);
char		*ft_guillemet(char **argv, int i);
char		**ft_str_guillemet(char **argv);
char		**ft_write_str(int i, char **save, int tmp, char **argv);
char		**ft_cpy_gui(char **argv);
int			ft_guillemet_size(char **argv, int i);
int			ft_gui_check(char **argv);
int			ft_parsing_manager_sup(char **argv);

// =======================================================================
//								actions
// =======================================================================

t_list_a		*sa(t_list_a *la, t_struct *data);
t_list_b		*sb(t_list_b *lb, t_struct *data);
t_struct		*ss(t_struct *data);
t_list_a		*pb(t_struct *data);
t_list_b		*pa(t_struct *data);
t_list_a		*ft_change_pos_a(t_list_a *la);
t_list_a		*ra(t_struct *data);
t_list_b		*rb(t_struct *data);
t_list_a		*rra(t_struct *data);
t_list_b		*rrb(t_struct *data);

// =======================================================================
//								algo
// =======================================================================

void		ft_algo_manager(t_struct *data, int len);

// =======================================================================
//								algo 3
// =======================================================================

void		ft_algo_3(t_struct *data);
void		ft_algo_3sup(t_struct *data, int num1, int num2, int num3);

// =======================================================================
//								algo 4
// =======================================================================

void		ft_algo_4(t_struct *data, int token);
void		ft_algo_4_manager(t_struct *data);
void		ft_algo_4_1(t_struct *data);
void		ft_algo_4_2(t_struct *data);
void		ft_algo_4_3(t_struct *data);
void		ft_algo_4_3sup(t_struct *data, int nb1, int nb2, int nb3, int nb4);
void		ft_algo_4_4(t_struct *data);

// =======================================================================
//								algo 10
// =======================================================================

void		ft_algo_10(t_struct *data);
void		ft_algo_10_manager(t_struct *data);
int			ft_found_little(t_struct *data);
void		ft_10_action(t_list_a *la, t_struct *data);
int			ft_found_pos_little(t_struct *data);
void		ft_tri_10(t_list_a *la, t_struct *data);

// =======================================================================
//								algo 100
// =======================================================================

void		ft_algo_100_manager(t_struct *data, int argc);
int			*ft_100_tab(t_list_a *la, t_struct *data);
int			*ft_100_tab_manager(t_struct *data);
int			*ft_get_first_unit(int *tab, t_list_a *la, t_struct *data);
bool		ft_tab_checker(int *tmp, t_struct *data);
void		push_swap(t_list_a *data);
void		ft_error(void);
int			*ft_essaie(int *tmp, t_struct *data, int *tab);
void		ft_take_25_algo100(t_struct *data, int compare, int little);
int			ft_get_100_25(t_struct *data);
int			ft_get_cpt_100(t_struct *data);
bool		ft_100_check(t_struct *data, int len);
void		ft_trie_50_algo_100(t_struct *data, t_list_a *la);
int			ft_search_min25_100(t_struct *data, t_list_b *lb);
int			ft_get_min_100_25(t_struct *data, int len);
int 		ft_somme_algo_100(t_struct *data, int argc);
void		ft_tri_25_algo100(t_struct *data);
bool		ft_verif_25(t_struct *data, int len);
void		ft_algo_100_helper(t_struct *data);
int			ft_trie_100(t_struct *data, int little);
int			ft_found_pos_little_100(t_struct *data);
int			ft_found_little_100_25(t_struct *data, int pos);
int			ft_found_little_100_75(t_struct *data, int pos, t_list_a *la);
bool		ft_tri_100_done(t_struct *data);
int			ft_scan_chunk1_100(t_struct *data);
int			ft_found_pos_little_first_part(t_struct *data, int chunk, t_list_a *la);
int			ft_found_pos_little_last_part(t_struct *data, int chunk, t_list_a *la);
bool		ft_compare_little(t_struct *data, int littlech1, int littlech2);
int			ft_take_first_chunk(t_struct *data, int moyenne, t_list_a *la, int token);
int			ft_somme_algo_100(t_struct *data, int argc);
int			ft_trie_100_b_little(t_struct *data, int little);
int			ft_trie_100_b_biggest(t_struct *data, int little);
int			ft_found_best_place100(t_struct *data, t_list_b *lb);
int			ft_take_b_100(t_struct *data, int lit, int token);
int			ft_take_best_place100(t_struct *data, int cpt);
void		ft_sort_b100(t_struct *data, int i);
void		ft_take_first_second_algo100(t_struct *data, int compare, int little);
void		ft_100_swap_manager(t_struct *data, int lit1, int lit2);
int			ft_found_big_lb_100(t_struct *data);
void		ft_make_list_right(t_struct *data, int i);
int			ft_found_pos_lb_big(t_struct *data);
int			ft_verif_lb(t_struct *data);
void		ft_helper_100(t_struct *data, int nb, int i);
int			ft_found_lower_b(t_struct *data);
int			ft_take_best_place102(t_struct *data, int nb);
int			 ft_make_best_place_alg100(t_struct *data, t_list_b *lb);


#endif