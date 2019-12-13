/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 13:06:59 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 11:29:47 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# define BUFF_SIZE 1

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
	struct s_list	*previous;
}					t_list;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *b, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *src);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *str, const char *to_find);
char				*ft_strnstr(const char *str, const char *to_find,
					size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int nbr);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(const char *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lst_at(t_list *list, int position);

void				ft_lstadd_end(t_list **begin_list, t_list *element);
size_t				ft_numlen(int n);
size_t				ft_wordcalc(char const *s, char c);
void				ft_swap(int	*a, int	*b);
t_list				*ft_listlast(t_list *list);
int					ft_listsize(t_list *lst);
int					*ft_range(int min, int max);
int					ft_digitlen(intmax_t n, int base);
int					ft_udigitlen(uintmax_t n, int base);
void				ft_putnbrmax(uintmax_t n);
void				ft_putintmax(intmax_t n);
void				ft_putnbr_base(long long hexa, int base);
char				*ft_itoa_base(unsigned long int value,
					unsigned long int base);
void				ft_list_sort(t_list *begine_list, int (*cmp)());
void				ft_swap_str(char **a, char **b);
int					get_next_line(int fd, char **line);
double				ft_atof(char *nbr);
void				ft_free_table(char ***table);
size_t				ft_table_len(char **tab);
double				ft_max(double a, double b);
int					ft_strpos(char *str1, char *str2);
t_list				*ft_dbllstnew(void const *content, size_t content_size);
void				ft_dbllstadd_end(t_list **head, t_list *list);
double				ft_map(double x, double size, int in);

#endif
