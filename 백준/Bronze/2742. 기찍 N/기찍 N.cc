#include<stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	printf("%d\n", num);
	while(num>1){
		num -= 1;
		printf("%d\n",num);
	}
}