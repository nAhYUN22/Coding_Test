#include<stdio.h>
int main()
{
	int a, b, c;
	long money; 
	scanf("%d %d %d", &a, &b, &c);
	
	if(a == b & b == c & a ==c){
		money = 10000 + a*1000;
	}
	else if(a == b || b==c || c==a){
		if(a==b){
			money = 1000 + a*100;
		}
		if(b==c){
			money = 1000 + b*100;
		}
		if(a==c){
			money = 1000 + a*100;
		}
	}
	else{
		if(a<c&b<c){
			money = c*100;
		}
		if(b<a & c<a){
			money = a*100;
		}
		if(a<b&c<b){
			money = b*100;
		}
	}
	printf("%ld", money);
	
	return 0;
		
}