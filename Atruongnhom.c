#include<stdio.h>
int main(){
	int a,b,c; 
	printf("Nhap a:");
	scanf("%d", &a);
	printf("Nhap b:");
	scanf("%d", &b);
	printf("Nhap c:");
	scanf("%d", &c);
	int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	printf("max cua %d va %d va %d la %d\n",a,b,c,max);
}
