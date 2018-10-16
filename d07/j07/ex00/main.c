#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

int main(int argc, char **argv)
{
	if (argc)
		printf("my : %s \n",ft_strdup(argv[1]));
		printf("original : %s \n",strdup(argv[1]));
}


