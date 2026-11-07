void *ft_memset (void *ptr, int value, size_t num)
{
    unsigned char *p;
    unsigned char v;
    size_t c;
    
    p = (unsigned char *)ptr;
    v = (unsigned char)value;
    c = 0;
    while (c < num)
    {
        p[c] = v;
        c++;
    }
    return (ptr);
}