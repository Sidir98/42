#include "ft_list.h"
#include <stdio.h>
int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}
t_list *ft_create_elem(void *data);
void ft_list_push_back(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);

void aya(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		aya();
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(nb % 10 + 48);
	}
}

int ft_print_list(t_list *m)
{
	ft_putnbr(*((int *)m->data));
	ft_putchar('\n');
	return(0);
}

int main(void)
{
	t_list *m;
	int a;
	int b;

	a = 5;
	b = 6;
	m = (ft_create_elem(&a));
	ft_list_push_back(&m,&b);
	ft_print_list(m);
	ft_print_list(m->next);
	printf("%i\n",ft_list_size(m));

}
