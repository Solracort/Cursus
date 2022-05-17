#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_strrchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(const char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strrchr(const char *s, int c);



#endif