#include <stdio.h>
#include <stdlib.h>

int main(void)

{   int a1,a2;
	printf("�п�J�@�Ӿ��:");
	scanf_s("%d", &a1);
	a2=a1 % 2;
	if (a2 == 0)
		printf("%d�O����\n", a1);
	if (a2 == 1)
		printf("%d�O�_��\n", a1);

	system("pause");
	return 0;
		
}