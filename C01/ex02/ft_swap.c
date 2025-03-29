#include <unistd.h>

void ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	char c1 = (*a % 10) + '0';
	char c2 = (*b % 10) + '0';
	write(1, "a=", 2);
	write(1, &c1, 1);
	write(1, "b=", 2);
	write(1, &c2, 1);
	write(1, "\n", 1);
}

int main(void) {
	int a = 0;
	int b = 1;
	int *ptrA = &a;
	int *ptrB = &b;
	ft_swap(ptrA, ptrB);
	return (0);
}
