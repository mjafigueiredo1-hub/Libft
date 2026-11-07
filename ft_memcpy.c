void *memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *dt;
    unsigned char *sc;
    size_t c;

    c = 0;
    dt = (unsigned char *)dest;
    sc = (unsigned char *)src;
    while (c < n)
    {
        dt[c] = sc[c];
        c++;
    }
    return (dest);
}