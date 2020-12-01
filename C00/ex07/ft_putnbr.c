#include <unistd.h>
#include <stdio.h>//TESTING PURPOSE!

int nb;
int c;
char a;

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_count(c)//count character & print?
{
	//write(1, &c, sizeof(c));
	printf("%lu\n", sizeof(c));//TESTING PURPOSE
} 

void	ft_putnbr(int nb)
{
	ft_count(nb);//send to counter
}

int	main(void)
{
	ft_putnbr(1);
}