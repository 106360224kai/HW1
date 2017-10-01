#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	int a1, a2,a3;
	printf("請輸入兩個整數:");
	scanf_s("%d%d", &a1, &a2);
	a3=a1 % a2 ;
		if (a3 == 0)
			printf("%d是%d的倍數\n", a1, a2);
		else
			printf("%d不是%d的倍數\n", a1, a2);
	system("pause");
	return 0;
}
