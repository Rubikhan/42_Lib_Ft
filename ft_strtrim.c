#include "libft.h"

static int ft_boundspacecount(char const *a)
{
	char *b;
	b = (char*)a;
	int c;
	int d;

	c = 0;

	while (*b == ' ' || *b == '\n' || *b == '\t')
	{
		b++;
		c++;
	}

	d = ft_strlen(b);

	while(b[--d] == ' ' || b[d] == '\n' || b[d] == '\t')
		c++;

	return(c);
}

char *ft_strtrim(char const *s)
{
    char *a;
    char *b;
	int c;
    int d;

    a = (char*)s;

	if(*a == '\0')
		return((char*)s);

    while (*a == ' ' || *a == '\n' || *a == '\t')
		a++;

	if(*a == '\0')
		return("");

	c = ft_boundspacecount(s);
    b = malloc(sizeof(char) * (ft_strlen(s) - c + 1));
	if (b == NULL)
		return (NULL);
	ft_bzero(b, (ft_strlen(a) + 1));

	d = ft_strlen(a);
	
	while(a[--d] == ' ' || a[d] == '\n' || a[d] == '\t')
		;

	ft_strncpy(b, a, (d+1));

    return(b);
}