#include <unistd.h>

void	print_number(int num)
{
	char	buffer[2];

	buffer[0] = num / 10 + '0';
	buffer[1] = num % 10 + '0';
	write(1, buffer, 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			print_number(i);
			write(1, " ", 1);
			print_number(j);
			if (i != 98 || j != 99)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			j++;
		}
		i++;
	}
}
