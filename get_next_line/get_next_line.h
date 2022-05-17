#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*ft_get_buff_text(int fd, char *all_txt);
char	*ft_get_line(char *all_txt);
char	*ft_begining_next_buff_text(char *all_txt);
char	*get_next_line(int fd);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *s);
char	*ft_newstr(char *all_txt);

#endif