//
//  Challenge06.c
//  C
//
//  Created by berlizz on 2018. 2. 26..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Challenge.h"

#ifdef CH0306

int main() {
    int computer[3];
    srand((int)time(NULL));
    computer[0] = rand() % 10;
    
    computer[1] = rand() % 10;
    while(computer[1] == computer[0]) {
        computer[1] = rand() % 10;
    }
    
    
    computer[2] = rand() % 10;
    while(computer[2] == computer[1] || computer[2] == computer[0]) {
        computer[2] = rand() % 10;
    }
    
    printf("%d %d %d\n", computer[0], computer[1], computer[2]);

    
    int player[3];
    int turnCount = 0;
    
    while(1) {
        turnCount++;
        
        printf("3개의 숫자 선택 : ");
        scanf("%d %d %d", &player[0], &player[1], &player[2]);
        int strike = 0, ball = 0;
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                if(computer[i] == player[j]) {
                    if(i == j) {
                        strike++;
                    } else {
                        ball++;
                    }
                    break;
                }
            }
        }
        
        printf("%d 번째 도전 결과 : %d strike, %d ball\n", turnCount, strike, ball);
        if(strike == 3) {
            break;
        }
    }
    
    return 0;
    
}

#endif
