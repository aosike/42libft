# include "libft.h"

t_buf	ft_buf_init(t_buf *b, size_t size)
{
	size_t	s;

	s = (size == 0) ? BUFFER_INIT_SIZE : size;
	b->sizemax = s;
	b->len = 0;
	b->str = malloc(sizeof(char) * s);
	if (b->str == NULL)
		return (NULL);
	return (b);
}

t_buf	*ft_buf_add(t_buf *b, char *s, size_t len)
{
	if (b->blen + len >= b->bmax)
		if (ft_buf_resize(b, len) == NULL)
			return (NULL);
	ft_memcpy(b->str + b->blen, s, len);
	b->len += len;
	b->str[b->len] = 0;
	return (b);
}

t_buf	*ft_buffer_resize(t_buf *b, size_t len)
{
	char	*newstr;
	size_t	newsize;

	newsize = sizeof(char) * b->bmax * 2;
	while (b->blen + len >= newsize)
		newsize *= 2;
	newstr = ft_realloc(b->str, newsize, b->max);
	if (newstr == NULL)
		return (NULL);
	b->sizemax = newsize;
	b->str = newstr;
	return (b);
}

t_buf	*ft_buf_set(t_buf *b, int c, size_t len)
{
	if (b->blen + len >= b->bmax)
		if (ft_buf_resize(b, len) == NULL)
			return (NULL);
	ft_memset(b->str + b->blen, c, len);
	b->len += len;
	b->str[b->len] = 0;
	return (b);
}
