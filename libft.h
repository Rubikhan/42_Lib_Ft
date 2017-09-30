#ifndef	LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int ft_atoi(const char* str);
void ft_bzero(void *s, size_t n);
//	ft_itoa
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void* ft_memalloc(size_t size);
void* ft_memccpy(void* dst, const void* src, int c, size_t n);
void* ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void* ft_memcpy(void* dst, const void* src, size_t n);
//		ft_memdel
void* ft_memmove(void* dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
void ft_putchar(char c);
void ft_putchar_fd(char c, int fd);
void ft_putendl(char const *s);
void ft_putendl_fd(char const *s, int fd);
void ft_putnbr(int n);
void ft_putnbr_fd(int n, int fd);
void ft_putstr(char const *s);
void ft_putstr_fd(char const *s, int fd);
char* ft_strcat(char* s1, const char* s2);
char* ft_strchr(const char *s, int c);
void ft_strclr(char *s);
int ft_strcmp(const char *s1, const char *s2);
char* ft_strcpy(char* dst, const char* src);
//	ft_strdel
//	ft_strdup
int ft_strequ(const char *s1, const char *s2);
void ft_striter(char *s, void (*f)(char*));
void ft_striteri(char* s, void (*f)(unsigned int, char*));
// 	ft_strjoin
// 	ft_strlcat
size_t ft_strlen(const char *s);
//	ft_strmap
//	ft_strmapi
char* ft_strncat(char* s1, const char* s2, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char* ft_strncpy(char* dst, const char* src, size_t len);
int ft_strnequ(const char *s1, const char *s2, size_t n);
// 	ft_strnew
char* ft_strnstr(const char *big, const char *little, size_t len);
char* ft_strrchr(const char *s, int c);
//	ft_strsplit
char* ft_strstr(const char *big, const char *little);
// 	ft_strsub
//	ft_strtrim
int ft_tolower(int a);
int ft_toupper(int a);

#endif

