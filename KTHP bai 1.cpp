#include<stdio.h>
#include<math.h>
int main(){
	int N,D;
	printf("Nhap vao gia tri cua N:");
	scanf("%d",&N);
	if (N<100){
		int D=2*N;
		printf("Gia tri cua N la:%d",&D);
	}else{
		printf("Gia tri cua N khong hop le!");
	}
	return 0;
}
