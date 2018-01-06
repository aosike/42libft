#include "libft.h"

int		get_file(int fd, char **file)
{
	t_buf	buf;
	char	*line;

	ft_buf_init(&buf, BUFF_SIZE);
	while (get_next_line(fd, &line))
		ft_buf_add(&buf, line, ft_strlen(line)); //
	if (ft_strdup(buf.buf, file) && free(buf)) //strdup & clean buf
		return (1);
	return (-1);
}
