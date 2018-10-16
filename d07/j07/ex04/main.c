#include <stdio.h>

char **ft_split_whitespaces(char *str);
char ft_print_words_tables(char **tab);
int main(void)
{
	ft_print_words_tables(ft_split_whitespaces(""));
	return (0);	
}
