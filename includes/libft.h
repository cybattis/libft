/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:47:32 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/13 22:20:24 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifdef __linux__
#  define OPEN_MAX FOPEN_MAX
# endif

# define BUFFER_SIZE 2048

typedef struct s_vec2
{
	int	x;
	int	y;
}	t_vec2;

typedef struct s_vec3
{
	int	x;
	int	y;
	int	z;
}	t_vec3;

typedef struct s_vec4
{
	int	x;
	int	y;
	int	z;
	int	w;
}	t_vec4;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* vec2.c */
t_vec2	vec2(double x, double y);
t_vec2	vec2_zero(void);
t_vec2	vec2_set(double value);
t_vec2	*vec2_add(t_vec2 *self, t_vec2 v2);
t_vec2	*vec2_multv2(t_vec2 *self, t_vec2 v2);
t_vec2	*vec2_multi(t_vec2 *self, long n);
t_vec2	*vec2_multf(t_vec2 *self, double n);
t_vec2	*vec2_divv2(t_vec2 *self, t_vec2 v2);
t_vec2	*vec2_divi(t_vec2 *self, long n);
t_vec2	*vec2_divf(t_vec2 *self, double n);
double	vec2_mag(t_vec2 vec2);
t_vec2	*vec2_normalize(t_vec2 *v);
t_vec2	vec2_normalized(t_vec2 v);

/* vec3.c */
t_vec3	vec3(double x, double y, double z);
t_vec3	vec3_zero(void);
t_vec3	vec3_set(double value);
t_vec2	*vec3_add(t_vec3 *self, t_vec3 v3);
t_vec3	*vec3_multv2(t_vec3 *self, t_vec3 v3);
t_vec3	*vec3_multi(t_vec3 *self, long n);
t_vec3	*vec3_multf(t_vec3 *self, double n);
t_vec3	*vec3_divv2(t_vec3 *self, t_vec3 v3);
t_vec3	*vec3_divi(t_vec3 *self, long n);
t_vec3	*vec3_divf(t_vec3 *self, double n);
double	vec3_mag(t_vec3 v);
t_vec3	*vec3_normalize(t_vec3 *v);
t_vec3	vec3_normalized(t_vec3 v);

/* Check */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isspace(int c);

/* Memory */
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *src, int cpy, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *src);
char	*ft_strndup(const char *src, size_t n);

/* number */
int		ft_nbrlen(long nb);
int		ft_atoi(const char *str);
long	ft_atol(const char *s);
char	*ft_itoa(int n);

/* String */
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
int		ft_strichr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_strrev(char *s);
void	ft_strnrev(char *s, size_t n);
char	*ft_get_next_line(int fd);

/* I/O */
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_puts(char *s);
void	ft_putnbr(int nb);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_dprintf(int fd, const char *format, ...);
int		ft_printf(const char *format, ...);

/* Single chained list */
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
int		ft_lstsize(t_list *lst);

#endif
