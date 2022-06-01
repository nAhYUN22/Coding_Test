#include<stdio.h>

int main(){
	int a[9];
	int max;
	int check = 0;
	for(int i=0; i<9; i++){
		scanf("%d\n", &a[i]);
	}
	max = a[0];
	for(int i = 0; i<9; i++){
		if(max < a[i]){
			max = a[i];
			check = i;
		}
	}
	printf("%d\n%d", max, check+1);
	
	return 0;
}