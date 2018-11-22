#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <iostream>
int main()
{
	setlocale(LC_ALL, "");
	int a, d, q, r;
	printf("¬вете число a  ");
	scanf_s("%f", &a);
	printf("¬вете число d  ");
	scanf_s("%f", &d);

	q = a / d;//частное
    r = d % q;//остаток

    printf("частное: %d\n", q);
	printf("остаток: %d\n", r);
	system("pause");
}