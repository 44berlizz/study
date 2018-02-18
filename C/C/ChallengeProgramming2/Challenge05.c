//
//  Challenge05.c
//  C
//
//  Created by berlizz on 2018. 2. 19..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include "Challenge.h"

#ifdef CH0205

void desSort(int arr[], int length) {
    int temp;
    
    for(int i=0; i<length - 1; i++) {
        for(int j=0; j< length - i - 1; j++) {
            if(arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[7];
    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
    
    desSort(arr, sizeof(arr)/sizeof(int));
    
    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}

#endif

