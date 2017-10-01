#include <stdio.h>
#include <stdlib.h>

int main(void)

{   int a1,a2;
	printf("叫块俱计:");
	scanf_s("%d", &a1);
	a2=a1 % 2;
	if (a2 == 0)
		printf("%d琌案计\n", a1);
	if (a2 == 1)
		printf("%d琌计\n", a1);

	system("pause");
	return 0;
		
}