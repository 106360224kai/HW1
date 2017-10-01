#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
	int a1, a2, a3;
	printf("叫块3计:");
	scanf_s("%d%d%d", &a1, &a2, &a3);
	if (a1 >= a2 >= a3) 
		printf("程:%d  程:%d", a1, a3);
	else if (a1 >= a3 >= a2)
		printf("程:%d  程:%d", a1, a2);
	else if (a2 >= a1 >= a3)
		printf("程:%d  程:%d", a2, a3);
	else if (a2 >= a3 >= a1)
		printf("程:%d  程:%d", a2, a1);
	else if (a3 >= a2 >= a1)
		printf("程:%d  程:%d", a3, a1);
	else if (a3 >= a1 >= a2)
		printf("程:%d  程:%d", a3, a2);

	
		
		
		
	
	system("pause");
	return 0;

}