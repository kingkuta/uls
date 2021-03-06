#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    s = (unsigned char *)s + n;
    size_t i = 0;
    
    if (!s) return NULL;
    while (*((unsigned char *)s) != c && i < n) {
        s = (unsigned char *)s - 1;
        n--;
    }
    if (*((unsigned char *)s) == c)
        return (unsigned char *)s;
    else return NULL;
}
