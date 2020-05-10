//updown게임입니다. 특정 수를 컴퓨터에서 생성하고 그 수를 사용자가 맞추는 간단한 코드입니다.

#include <stdio.h>
//랜덤함수 이용
#include <stdlib.h>
#include <time.h>

//전처리기(매크로)
#define HUN 100

int main(void) {
    //변수 선언
    int usertry=0;
    int answer=0;
    int count=0;

    //랜덤 값 설정
    srand(time(NULL));
    answer = rand()%HUN +1;
    printf("%d",answer);
    printf("업다운 게임을 시작합니다.");
    
    //무한루프
    while(1){
        printf("1~100 사이의 숫자를 입력하세요.");
        scanf("%d",&usertry);
        //조건문
        if(usertry > answer){
            printf("입력하신 숫자가 더 큽니다.");
            //횟수 추가
            count++;
        }
        if(usertry < answer){
            printf("입력하신 숫자가 더 작습니다.");
            count++;
        }
        if(usertry==answer){
            break;
        }
    }
    //결과 출력
    printf("축하드립니다~%d번만에 성공하셨습니다.",count+1);
    return 0;
}