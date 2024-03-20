#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int n) {
    int answer = 0; //초기화
    if (num % n == 0) //num이 n의 배수인지 체크 
        answer=1;// 맞다면 1을 return
    else
        answer=0;
    return answer;
}
int main(){
solution(98,2);
return 0;
}