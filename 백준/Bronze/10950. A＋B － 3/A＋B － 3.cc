#include<stdio.h>
int main()
{
	int number;
	scanf("%d", &number);
	int i, a, b;
	for(i=0; i<number; i++){
		scanf("%d %d", &a, &b);
		printf("%d\n", a+b);
	}
	
	
	return 0;
		
}