#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int index;
	
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';//forcing NUL for string-end
	return (dest);	//MAN: return a pointer
			//to the destionation string dest
	}

int		main(void)
{
	char dest[] = "destination";
	char src[] = "XYZ";
	
	ft_strcpy(dest, src);
	printf("%s", dest);
}

//CONTROLLARE DEST BIGGER THAN SRC
