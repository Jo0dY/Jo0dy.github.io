#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int n, int m) {
    int answer = 0; //초기화
    if(number%n==0 && number%m==0) // number가 n의 배수이고 m의 배수인지 검사
        answer=1;// 맞으면 1
    else
        answer=0; // 아니면 0
    return answer;
    
}
int main(){
    solution(60,2,3);
        return 0;
}