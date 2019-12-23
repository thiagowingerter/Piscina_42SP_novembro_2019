
#include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int calc;

	calc = 0;
	if (nb >= 0)
		calc = nb;
	if (nb < 0)
	{
		calc = nb * -1;
		ft_putchar('-');
	}
	if (calc > 9) //425
		ft_putnbr(calc / 10); // 42 
	ft_putchar((calc % 10) + '0');
}

int main(void)
{
  int a;
  
  a = 412325;
  ft_putnbr(a);
  return(0);
}
