#include <unistd.h>

int x;
int y;
char a;

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_print_comb2(void)
{
	x = 0;
	y = 1;
	while(x < 99)
	{
		while(y <= 99)
		{
			if(x == 98)
			{
				write(1, "98 99\n", 6);
				return;
			}
			else if(x < y)
			{
			ft_putchar(x / 10 + 48);
			ft_putchar(x % 10 + 48);
			ft_putchar(' ');
			ft_putchar(y / 10 + 48);
			ft_putchar(y % 10 + 48);
			write(1, ", ", 2);
			}
		y++;
		}
	y = 0;
	x++;
	}
}

int main(void)
{
	ft_print_comb2();
}