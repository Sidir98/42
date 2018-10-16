#include <stdio.h>

char    *ft_strcat(char *dest, char *src);

int main(int argc, char **argv)
{
	if(argc)
		printf("%s", ft_strcat(argv[1], argv[2]));
		printf("%s", ft_strcat(argv[3], argv[4]));
    return(0);
}
