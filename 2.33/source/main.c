#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a1, a2, a3, a4, a5, a6, a7,a8;
	printf("�@��Ѫ��`���{��:");
	scanf_s("%f", &a1);
    printf("�T�o�@���ɦh�ֿ�:");
	scanf_s("%f", &a2);
	printf("�����@���ɯ��p�h�֤���:");
	scanf_s("%f", &a3);
	printf("�@�Ѫ������O:");
	scanf_s("%f", &a4);
	printf("�@�Ѫ��q��O(�L���O):");
	scanf_s("%f",&a5);

	a6 = a1 / a3;
	a7 = a6 * a2;
	a8 = a6 + a7 + a4 + a5;
	printf("�`��%f", a8);
	system("pause");
	return 0;


}