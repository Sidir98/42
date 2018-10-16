#include <unistd.h>

int ft_is_sort(int *tab, int length, int(*f)(int,int));

int ft_is_above(int a,int b)
{
	if (a > b)
		return (a - b);
	else if (a < b)
		return (a - b);
	else
		return (0);
}
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int na;

	na = nb;
	if (nb < 0)
	{
		ft_putchar('-');
	}
	if (na >= 10)
	{
		ft_putnbr(na / 10);
	}
	ft_putchar(na % 10 + 48);
}

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int s;

	nb = 0;
	i = 0;
	s = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' '
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			s = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb += str[i++] - '0';
	}
	return (nb * s);
}
int main(void)
{
	int tab[] = {1,2,3,4,5};
	int tab2[] = {0,-1,-5,-455,-560};
	int tab3[] = {0,0,0};
	ft_putnbr(ft_is_sort(tab,5,&ft_is_above));
	ft_putnbr(ft_is_sort(tab2,5,&ft_is_above));
	ft_putnbr(ft_is_sort(tab3,5,&ft_is_above));
	return 0;
}
