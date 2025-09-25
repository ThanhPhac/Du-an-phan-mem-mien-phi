#include<stdio.h>
int main(){
	float diem;
	printf("Chuong trinh tich hoc tap \n");
	printf("Nhap diem cua sinh vien: ");
	scanf("%f", &diem);
	if (diem >= 9) {
		printf("XX \n");
	}else if (diem >= 8) {
		printf("Gioi \n");
	}else if (diem >= 6.5) {
		printf("kha \n");
	}else if (diem >= 5) {
		printf("trung b�nh \n");
	}else if (diem >= 3.5) {
		printf("yeu \n");
	}else {
		printf("kem");
	}
	
	return 0;
	
}
