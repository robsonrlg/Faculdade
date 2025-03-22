
#include <stdio.h>

void troca (int *px, int *py )
{
	int temp;
	temp = *px; //uso do operador un�rio de cont�udo
	*px = *py;
	*py = temp;
}

int main ( void )
{
	int a = 5, b = 7;
	troca(&a, &b); /* passamos os endere�os das vari�veis */
	printf("%d %d \n", a, b);
	return 0;
}
