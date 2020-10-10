#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ban_dau = 4000;
	int so_nam = 4;
	int ve_sau = ban_dau;
	for (int i = 0; i < so_nam; i++){
		int lai =  ve_sau * 8/100;
		ve_sau = ve_sau + lai;
	    printf("lai = %d, \tTien hien tai = %d, sau %d nam\n", lai, ve_sau, i+1);
}
	    printf("tien ban dau =%d. tien ve sau= %d, gap %d lan\n, ban_dau, ve_sau, ve_sau / ban_dau");
	    return 0;
	    }
