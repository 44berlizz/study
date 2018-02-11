//
//  Challenge07.c
//  C
//
//  Created by berlizz on 2018. 2. 11..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include "Challenge.h"

#ifdef CH07
int main() {
    int number;
    printf("input : ");
    scanf("%d", &number);
    
    int k = 0;
    while(1) {
        if(number < 2) {
            break;
        }
        
        number /= 2;
        k++;
    }
    
    printf("공식을 만족하는 k의 최대값은 %d", k);
    return 0;
}
#endif
