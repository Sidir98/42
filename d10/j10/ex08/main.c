#include <stdio.h>
#include <stdlib.h>
void ft_sort_wordtab(char **tab);
char ft_print_words_tables(char **tab);
void ft_advanced_sort_wordtab(char **tab,int(*cmp)(char *, char *));
int	ft_strcmp(char *s1, char *s2);
int main(int argc, char **argv)
{
	/*char **tab;
	tab =(char**)malloc(sizeof(char*) * 2);
	tab[0] = (char*)malloc(sizeof(char) * 7);
	tab[1] = (char*)malloc(sizeof(char) * 7);
	tab[0] = "Docteur";
	tab[1] = "Bonjour";*/
	ft_advanced_sort_wordtab(argv,&ft_strcmp);
	ft_print_words_tables(argv);
	return (0);
}
