#include <stdio.h>
#include <stdlib.h>

int main(void) 
{    
	float w, h,a1;
	printf("請輸入身高與體重:");
	scanf_s("%f%f", &h, &w);
	a1 = w / (h*h);
	printf("BMI=%f\n", a1);
		if (a1 <= 18.5)
			printf("Underweight\n");
		if (18.5 < a1 & a1<= 24.9)
			printf("Normal\n");
		 if (25 <= a1 & a1< 29.9)
			printf("Overweight\n");
		 if (a1>=30)
			printf("Obese\n");
	system("pause");
	return 0;




}