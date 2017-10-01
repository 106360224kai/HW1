#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a1, a2, a3, a4, a5, a6, a7,a8;
	printf("一整天的總里程數:");
	scanf_s("%f", &a1);
    printf("汽油一公升多少錢:");
	scanf_s("%f", &a2);
	printf("平均一公升能行駛多少公里:");
	scanf_s("%f", &a3);
	printf("一天的停車費:");
	scanf_s("%f", &a4);
	printf("一天的通行費(過路費):");
	scanf_s("%f",&a5);

	a6 = a1 / a3;
	a7 = a6 * a2;
	a8 = a6 + a7 + a4 + a5;
	printf("總價%f", a8);
	system("pause");
	return 0;


}