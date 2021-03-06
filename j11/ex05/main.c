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
t_list *ft_list_last(t_list *begin_list);
t_list *ft_list_push_params(int ac, char **av);
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
void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
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
	while (m->next != NULL)
	{
		ft_putstr((char*)m->data);
		ft_putchar('\n');
		m = m->next;
	}
	return(0);
}

int main(int argc, char **argv)
{
	t_list *m;
	int a;
	int b;
	int c;

	/*a = 5;
	  b = 6;
	  c = 7;
	  m = (ft_create_elem(&a));
	  ft_list_push_back(&m,&b);
	  ft_list_push_back(&m,&c);
	  ft_print_list(m);
	  ft_print_list(m->next);
	  ft_print_list(ft_list_last(m));*/
	m = ft_list_push_params(argc,argv);
	ft_print_list(m);
	return (0);
}
