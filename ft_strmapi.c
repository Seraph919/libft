
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (!s || !f) return NULL;
    int i = 0;
    int len = ft_strlen(s);
    char *returned = malloc(sizeof(char) * (len + 1));
    if(!returned) return NULL;
    while (i < len)
    {
        returned[i] = f(i,s[i]);
        i++;
    }
    returned[i] = '\0';
    return returned;
}