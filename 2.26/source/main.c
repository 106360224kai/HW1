#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	int a1, a2,a3;
	printf("�п�J��Ӿ��:");
	scanf_s("%d%d", &a1, &a2);
	a3=a1 % a2 ;
		if (a3 == 0)
			printf("%d�O%d������\n", a1, a2);
		else
			printf("%d���O%d������\n", a1, a2);
	system("pause");
	return 0;
}
