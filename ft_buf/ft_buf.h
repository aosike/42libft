#ifndef FT_BUF_H
# define FT_BUF_H

# include "libft.h"

typedef struct	s_buf
{
	char		*buf;
	size_t		blen;
	size_t		bmax;
}				t_buf;

t_buf	*ft_buf_init(t_buf *b, size_t size);
t_buf	*ft_buf_add(t_buf *b, char *s, size_t len);
t_buf	*ft_buf_resize(t_buf *b, size_t len);
t_buf	*ft_buf_init(t_buf *b, int c, size_t len);
