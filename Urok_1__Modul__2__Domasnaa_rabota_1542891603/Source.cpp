#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <iostream>
int main()
{
	setlocale(LC_ALL, "");
	int a, d, q, r;
	printf("����� ����� a  ");
	scanf_s("%f", &a);
	printf("����� ����� d  ");
	scanf_s("%f", &d);

	q = a / d;//�������
    r = d % q;//�������

    printf("�������: %d\n", q);
	printf("�������: %d\n", r);
	system("pause");
}