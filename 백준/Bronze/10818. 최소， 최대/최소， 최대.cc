#include<stdio.h>

int main(){
	int number;
	scanf("%d", &number);
	int arr[number];
	
	for(int i=0; i<number; i++){
		scanf("%d", &arr[i]);
	}
	
	int min = arr[0], max = arr[0];
	for(int j=0; j<number; j++){
		if(arr[j]<min)
			min = arr[j];
		if(arr[j]>max)
			max = arr[j];
	}
	
	printf("%d %d", min, max);
}