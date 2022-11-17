#include <stdio.h>

void ft_putnbr_base(int nbr,char *base);
int check_base(char *str);

int main(void)
{
	check_base("abcd");
	printf("check base");
	ft_putnbr_base(100,"0123456789");
	printf("\n");
	ft_putnbr_base(-100,"ab");
	printf("\n");
	ft_putnbr_base(10,"0123456789a");
	printf("\n");
	ft_putnbr_base(100,"");
	printf("\n");
	ft_putnbr_base(100,"poniguay");
	printf("\n");
	ft_putnbr_base(100,"0123456789");
	printf("\n");
}

