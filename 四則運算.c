#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j;
	char k;
	printf("輸入2個數一個運算符號");
	scanf("%d %d %c",&i,&j,&k);
	switch(k){
		case '+' :{
			printf("%d+%d=%d",i,j,i+j);
			break;
		}
		case '-' :{
			printf("%d-%d=%d",i,j,i-j);
			break;
		}
		case '*' :{
			scanf("%d*%d=%d",i,j,i*j);
			break;
		}
		case '/' :{
			scanf("%d/%d=%d",i,j,i/j);
			break;
		}
		default :{
			printf("你打錯了");
		}
	}
	system("pause");
	return 0;
} 
