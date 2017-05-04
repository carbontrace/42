#include <unistd.h>

void	ft_putchar(char c)
{
		write (1, &c, 1);
}

int		main(void)
{
		int i;

		i = 0;
		char str[] = "9876543210\n";

		while (str[i] != '\0')
		{
		ft_putchar(str[i]);
		i++;
		}
		return(0);
}
