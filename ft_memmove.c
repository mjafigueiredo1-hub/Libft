void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dt;
    unsigned char *sc;
    size_t c;

    dt = (unsigned char *)dest;
    sc = (unsigned char *)src;
    if (dt > sc)
    {
        c = n;
        while (c > 0)
        {
            c--;
            dt[c] = sc[c];
        }
    }
    else if (dt < sc)
    {
        c = 0;
        while (c < n)
        {
            dt[c] = sc[c];
            c++;
        }
    }
    return (dest);
}