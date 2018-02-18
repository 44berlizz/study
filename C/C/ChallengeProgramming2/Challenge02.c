//
//  Challenge02.c
//  C
//
//  Created by berlizz on 2018. 2. 18..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include "Challenge.h"

#ifdef CH0202

int main() {
    int number;
    printf("10진수 정수 입력: ");
    scanf("%d", &number);
    
    int arr[32];
    int i = 0;
    while(1) {
        int remainder = number % 2;
        arr[i] = remainder;
        
        int quotient = number / 2;
        if(quotient == 0) {
            for(int j=i; j>=0; j--) {
                printf("%d", arr[j]);
            }
            break;
        } else if(quotient == 1) {
            arr[i] = remainder;
            printf("%d", quotient);
            for(int j=i; j>=0; j--) {
                printf("%d", arr[j]);
            }
            break;
        } else {
            number = quotient;
            i++;
        }
    }
    
    printf("\n");
    
    return 0;
}

#endif
