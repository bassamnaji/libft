#ifndef LIBFT_H
# define LIBFT_H

// #include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stddef.h>


int             ft_isalpha(int n);
int             ft_isalnum(int n);
int             ft_isascii(int n);
int             ft_isdigit(int n);
int             ft_isprint(int n);
int             ft_toupper(int c);
int             ft_tolower(int c);
int             ft_atoi(char *str);
int             ft_memcmp(const void *s1, const void *s2, size_t n);
int             ft_strncmp(char *s1, char *s2, unsigned int n);
int		        ft_strlen(char *str);
char            *ft_strchr(const char *s, int c);
char            *ft_strnstr(const char *haystack, const char *needle, size_t len);
char            *ft_strdup(char *src);
char	        *ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strrchr(const char *s, int c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//static void     ft_putchar(char c);
void            ft_bzero(void *s, size_t n);
void            *ft_calloc(size_t count, size_t size);
void            ft_bzero(void *s, size_t n);
void            *ft_memcpy(void *dst, const void *src, size_t n);
void	        *ft_memmove(void *dst, const void *src, size_t len);
void        	*ft_memset(void *b, int c, size_t len);
void            *ft_memchr(const void *s, int c, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t	        ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t          ft_strlcat(char *dst, const char *src, size_t dstsize);


#endif
