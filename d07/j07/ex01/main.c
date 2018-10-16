#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *ft_range(int min, int max);


int main(int argc, char **argv)
{
		(void)argc;
		int *range;
		range = ft_range(atoi(argv[1]),atoi(argv[2]));
		/*int i;
		i = 0;
		for (i = 0;  i < 100 ; i++)
		{
			printf("%d ,",range[i]);
		}*/
}
