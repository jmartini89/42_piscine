#include <unistd.h>

char x;
char y;
char m;
char n;

void	ft_putchar1(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 2);
}

void	ft_putchar2(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 2);
	write(1, &d, 2);
}

void ft_print_comb2(void)
{
	x = '0';
	y = '0';
	m = '0';
	n = m + 1;
	while(x <= '9')
	{
		while(y <= '9')
		{
			while (m <= '9')
			{
				while (n <= '9')
				{
					if((x * 10 + y) == 626)
					{
						write(1, "98 99", 5);
						return;
					}
					else if(x * 10 + y < m * 10 + n)
					{
					ft_putchar1(x, y, ' ');
					ft_putchar2(m, n, ',', ' ');
					}
				n++;	
				}
			m++;
			n = '0';
			}
		y++;
		m = '0';
		n = y + 1;
		}
	x++;
	y = '0';
	m = x + 1;
	}
}

int main(void)
{
	ft_print_comb2();
}