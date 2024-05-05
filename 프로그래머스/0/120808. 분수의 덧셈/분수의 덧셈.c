#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
        int* answer = (int*)malloc(1);
        int a = denom1 * denom2;
        int b = denom2*numer1 + numer2 * denom1;
        int c = 0;
        for (int i=1; i<=a; i++){
            if(a%i == 0 && b%i==0){
                c = i;
            }
        }
        answer[0]=b/c;
        answer[1]=a/c;
        
        return answer;
    
    
    
}