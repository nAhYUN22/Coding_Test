#include<stdio.h>
int main()
{
	int N, result;
	scanf("%d", &N);
	
	int i;
	for(i=1; i<=9; i++){
		result =  N * i;
		printf("%d * %d = %d\n", N, i, result);
	}
	
	return 0;
		
}