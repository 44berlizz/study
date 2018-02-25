//
//  Challenge01.c
//  C
//
//  Created by berlizz on 2018. 2. 26..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include "Challenge.h"

#ifdef CH0301
void printArray(int (* arr)[4]) {
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void rotateArray(int (* arr)[4]) {
    int temp[4][4];
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            temp[j][3-i] = arr[i][j];
        }
    }
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            arr[i][j] = temp[i][j];
        }
    }
}

int main() {
    int arr[4][4] = { {1, 2 ,3, 4},
        {5, 6 ,7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    for(int i=0; i<4; i++) {
        printArray(arr);
        rotateArray(arr);
    }
    
    return 0;
}


#endif

