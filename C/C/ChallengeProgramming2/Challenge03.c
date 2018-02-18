//
//  Challenge03.c
//  C
//
//  Created by berlizz on 2018. 2. 19..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include "Challenge.h"

#ifdef CH0203

int main() {
    int arr[10];
    int number;
    int length = sizeof(arr)/sizeof(int);
    int j = 0;
    int k = length - 1;
    
    printf("총 10개의 숫자 입력\n");
    for(int i=0; i<length; i++) {
        printf("입력: ");
        scanf("%d", &number);
        if(number % 2 == 0) {
            arr[k] = number;
            k--;
        } else {
            arr[j] = number;
            j++;
        }
    }
    
    printf("배열 요소의 출력: ");
    for(int i=0; i<length; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

#endif
