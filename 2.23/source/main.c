#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
	int a1, a2, a3;
	printf("�п�J3�ӼƦr:");
	scanf_s("%d%d%d", &a1, &a2, &a3);
	if (a1 >= a2 >= a3) 
		printf("�̤j��:%d  �̤p��:%d", a1, a3);
	else if (a1 >= a3 >= a2)
		printf("�̤j��:%d  �̤p��:%d", a1, a2);
	else if (a2 >= a1 >= a3)
		printf("�̤j��:%d  �̤p��:%d", a2, a3);
	else if (a2 >= a3 >= a1)
		printf("�̤j��:%d  �̤p��:%d", a2, a1);
	else if (a3 >= a2 >= a1)
		printf("�̤j��:%d  �̤p��:%d", a3, a1);
	else if (a3 >= a1 >= a2)
		printf("�̤j��:%d  �̤p��:%d", a3, a2);

	
		
		
		
	
	system("pause");
	return 0;

}