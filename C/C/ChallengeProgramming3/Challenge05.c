//
//  Challenge05.c
//  C
//
//  Created by berlizz on 2018. 2. 26..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Challenge.h"

#ifdef CH0305

int main() {
    
    int win = 0, draw = 0, lose = 0;
    
    for(int i=0; i<4; i++) {
        int number;
        printf("바위는 1, 가위는2, 보는3 : ");
        scanf("%d", &number);
        
        srand((int)time(NULL));
        int computer = rand() % 3 + 1;
        if(computer == 1) {
            if(number ==1) {
                printf("당신은 바위, 컴퓨터는 바위, 비겼습니다\n");
                draw++;
            } else if(number == 2) {
                printf("당신은 가위, 컴퓨터는 바위, 젔습니다\n");
                lose++;
            } else {
                printf("당신은 보, 컴퓨터는 바위, 이겼습니다\n");
                win++;
            }
        } else if (computer == 2) {
            if(number ==1) {
                printf("당신은 바위, 컴퓨터는 가위, 이겼습니다\n");
                win++;
            } else if(number == 2) {
                printf("당신은 가위, 컴퓨터는 가위, 비겼습니다\n");
                draw++;
            } else {
                printf("당신은 보, 컴퓨터는 가위, 졌습니다\n");
                lose++;
            }
        } else {
            if(number ==1) {
                printf("당신은 바위, 컴퓨터는 보, 졌습니다\n");
                lose++;
            } else if(number == 2) {
                printf("당신은 가위, 컴퓨터는 보, 이겼습니다\n");
                win++;
            } else {
                printf("당신은 보, 컴퓨터는 보, 비겼습니다\n");
                draw++;
            }
        }
    }
    
    printf("게임의 결과 : %d승, %d무, %d패\n", win, draw, lose);
    
    return 0;
}

#endif
