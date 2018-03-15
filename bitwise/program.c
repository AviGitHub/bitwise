#include <stdlib.h>
#include <stdio.h>
#include "bitwise.h"

void main()
{
	int x = 15;

	printf("get bit 3 %d, clear bit 3 %d, set bit 3 %d\n", get_bit(x, 3), clear_bit(x, 3), set_bit(x, 3));
	
	printf("updata bit 3 %d\n", update_bit(x, 3,0));

	printf("press anything to quit\n");

	getchar();

}