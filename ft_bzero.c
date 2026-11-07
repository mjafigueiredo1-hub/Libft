void ft_bzero (void *ptr, size_t num)
{
    unsigned char *p;
    size_t c;
    
    p = (unsigned char *)ptr;
    c = 0;
    while (c < num)
    {
        p[c] = 0;
        c++;
    }
}