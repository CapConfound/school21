/* memset example */
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int* sequence;
	unsigned int ch;

	ch = c;
	sequence = s;
	while (n > 0)
	{
		sequence = &ch;
		sequence++;
		n--;
	}
	return (s);
}

int		main()
{
	// char str[] = "almost every programmer should know memset!";
	char str[] = "almo";
	memset (str,'-',6);
	puts (str);
	ft_memset (str,'-',6);
	puts (str);
	return 0;
}