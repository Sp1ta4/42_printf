#include "./includes/ft_printf_bonus.h"
#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
	// ft_printf("%#x\n", 0);
	// printf("%#x\n", 0);
	printf("%d\n",ft_printf(" %#x |%#x |%#x |%#x |%#x |%#x",  INT_MAX , INT_MIN, LONG_MIN, ULONG_MAX, 0, -42));
	printf("%d\n",printf(" |%#x |%#x |%#x |%#x |%#x |%#x",  INT_MAX,INT_MIN,  LONG_MIN, ULONG_MAX, 0, -42));
	// printf("%d\n",ft_printf(" %#x %#x %#x %#x",  LONG_MIN, ULONG_MAX, 0, -42));
	// printf("%d\n",printf(" %#x %#x %#x %#x",  LONG_MIN, ULONG_MAX, 0, -42));
	return 0;
}
