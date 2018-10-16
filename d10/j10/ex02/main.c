#include <unistd.h>

int *ft_map(int *tab, int length, void(*f)(int));

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

void ft_trans(int nb)
{
	nb = nb/2;
}
int main (void){
	int tab[5];
	tab[0] = 10; tab[1] = 20; tab[2] = 30; tab[3] = 40; tab[4] = 50;
	int *tab2 = (ft_map(tab, 5, &ft_trans));
	int i;
	i = 0;
	while (i < 5)
	{
		ft_putnbr(tab2[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
