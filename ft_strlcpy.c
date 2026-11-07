unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_l;

	src_l = 0;
	while (src_l < size - 1)
	{
		dest[src_l] = src[src_l];
		src_l++;
	}
	src_l = 0;
	while (src[src_l])
	{
		src_l++;
	}
	if (size - 1 < src_l)
	{
		dest[size - 1] = '\0';
	}
	else
	{
		dest[src_l] = '\0';
	}
	return (src_l);
}