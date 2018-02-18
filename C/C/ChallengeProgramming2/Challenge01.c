//
//  Challenge01.c
//  C
//
//  Created by berlizz on 2018. 2. 18..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include "Challenge.h"

#ifdef CH0201

void printOddNumber(int param[], int length) {
    printf("홀수 출력: ");
    for(int i=0; i<length; i++) {
        if(param[i] % 2 != 0) {
            printf("%d ", param[i]);
        }
    }
    printf("\n");
}

void printEvenNumber(int param[], int length) {
    printf("짝수 출력: ");
    for(int i=0; i<length; i++) {
        if(param[i] % 2 == 0) {
            printf("%d ", param[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[10];
    printf("총 10개의 숫자 입력\n");
    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
    
    printOddNumber(arr, sizeof(arr)/sizeof(int));
    printEvenNumber(arr, sizeof(arr)/sizeof(int));
    
    return 0;
}

#endif
