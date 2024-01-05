#include <stdio.h>
int main()
{
	int x = 1, y, z;
	y = x + 1;
	x = x + 1;
	z = y + 1;
	y = 2;
	printf("%%%d, %d, %d%%", x, y, z);
}
