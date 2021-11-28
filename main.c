#include "ft_printf.h"

int	main()
{

	int i = 15;
	int *p = &i;
	ft_printf("%s %i %d %p %x %X %c %u %%", "mnameiszrireq!!", 8787,2147483647, p, 10, 10, 'B', 80);
	return(0);
}
