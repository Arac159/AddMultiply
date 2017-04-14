#include <stdlib.h>

void suma_produs(int a, int b)
{
	printf ("%d", a+b);
	printf ("%d", a*b);
}

void main()
{
	int a = 0, b = 0;
	scanf_s("%d%d", a, b);
	suma_produs (a,b);
}
