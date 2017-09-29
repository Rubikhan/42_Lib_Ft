#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2 && (*s1 != '\0' || *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
	{
		return((*s1 - *s2));
	}

	else
		return (0);

}