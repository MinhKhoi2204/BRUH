#include<stdio.h>
int main (){
	int n;
	do{
		printf("nhap vao so nguyen duong n: ");
		scanf("%d",&n);
	}while(n<=2);
	int a=0,b=1,c=1;
	for(int i=3;i<n;i++){
		a=b;
		b=c;
		c=a+b;}
	printf("so thu n trong day Fibonaxi: %d",c);
	}
