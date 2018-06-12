#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int a,m[6],i;
	printf("輸入一個數字:");
	scanf("%2d",&a);
	
	m=rand()%49+1;
	printf("數字2:%d\n",m);
	if(a==m)
		printf("\n答對");
	else
		printf("\n答錯");
	return 0;
}
