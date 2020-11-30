#include <unistd.h>

void ft_print_comb2(void)
{
	char x;
	char y;
	char m;
	char n;

	x = '1';
	y = '2';
	m = '1';
	n = '5';
	while(x <= '9')
	{
		while(y <= '9')
		{
			while (m <= '9')
			{
				while (n <= '9')
				{
					write(1, &x,1);
					write(1, &y,1);
					write(1, " ", 1);
					write(1, &m, 1);
					write(1, &n, 1);
					write(1, ",", 1);
					write(1, " ", 1);
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
	if(x * 10 + y < m * 10 + n)
			return;
	}
}

int main(void)
{
	ft_print_comb2();
}