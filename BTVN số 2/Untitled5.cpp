#include <stdio.h>
int main(){
	int a,b,x,y;
	printf("nhap so a",a);
	scanf("%d",&a);
	printf("nhap so b",b);
	scanf("%d",&b);
    if (a>=b){
    	if (b==0){
    		printf("khong the chia cho 0");
    		}else{
    			int c = a/b;
    			printf("%d/%d = %d",a,b,c);
    			}
			}else{
				int c = a*b;
				printf("%d/%d x %d",a,c,c);
			}
			}
		
    
	
