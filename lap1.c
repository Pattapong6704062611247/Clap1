#include<stdio.h>
int main() {
	int num1;
	int num2;
	int sum;
	
	scanf("%d",&num1);
	scanf("%d",&num2);
	
	if (num1>num2) {
		printf("num1 greater than num2 \n");
		sum = num1 - num2;
		printf("%d",sum);
	} else {
		printf("num2 greater than num1 \n");
		sum = num2 - num1;
		printf("%d",sum);
	}
}
