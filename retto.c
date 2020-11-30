#include <unistd.h>

/*
void ft_setkey(char *key)
{
	key[0] = 'a';
	key[1] = 'b';
	key[2] = 'c';
	key[3] = 'd';
	key[4] = 'r';
	key[5] = 'q';
	key[6] = 'g';
	key[7] = '*';
}

void ft_setchar(char *c, int coords[], int sizes[], char key[])
{
	*c = key[6];
	if(coords[0] == 0)
	{
		if(coords[1] == 0)
			*c = key[0];
		else if(coords[1] == sizes[1] - 1)
			*c = key[1];
		else
			*c = key[4];
	}
	else if(coords[0] == sizes[0] - 1)
	{
		if(coords[1] == 0)
			*c = key[2];
		else if(coords[1] == sizes[1] - 1)
			*c = key[3];
		else
			*c = key[4];	
	}
	else
	{
		if((coords[1] == 0) || (coords[1] == sizes[1] - 1))
			*c = key[5];
	}
	ft_putchar(*c);
}*/

int main(void)
{
	int x;
	int y;
	int m;
	int n;
	char a;
	char r;
	/*char key[7];
	ft_setkey(key);*/
	
	a = 'a';
	r = '\n';
	x = 4;
	y = 5;
	m = 0;
	n = 0;
	while (n <= y)
	{
		while (m <= x)
		{
			write(1, &a, 1);//ft_putchar
			m++;
		}
		n++;
		write(1, &r, 1);
		m = 0;
	}
}

//array m x
//array n y