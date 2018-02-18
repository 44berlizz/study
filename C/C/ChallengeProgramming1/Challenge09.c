//
//  Challenge09.c
//  C
//
//  Created by berlizz on 2018. 2. 12..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include "Challenge.h"

#ifdef CH09
int main() {
    int arr1[8] = {3, 8, 11, -3, 2, 7, 19, 40};
    int arr2[8] = {7, 6, 9, 5, 4, 1, 1, 3, 22};
    
    int minimum1 = arr1[0];
    int minimum2 = arr2[0];
    
    for(int i=1; i<sizeof(arr1) / sizeof(int); i++) {
        if(arr1[i] < minimum1) {
            minimum1 = arr1[i];
        }
    }
    
    for(int i=1; i<sizeof(arr2) / sizeof(int); i++) {
        if(arr2[i] < minimum2) {
            minimum2 = arr2[i];
        }
    }
    
    int multiple = minimum1 * minimum2;
    
    int minimumDistance = 40;
    int minimumValue = 0;
    for(int i=0; i<sizeof(arr1) / sizeof(int); i++) {
        int distance = multiple - arr1[i];
        if(distance < 0) {
            distance *= -1;
        }
        if(distance < minimumDistance) {
            minimumDistance = distance;
            minimumValue = arr1[i];
        }
    }
    
    for(int i=0; i<sizeof(arr2) / sizeof(int); i++) {
        int distance = multiple - arr2[i];
        if(distance < 0) {
            distance *= -1;
        }
        if(distance < minimumDistance) {
            minimumDistance = distance;
            minimumValue = arr2[i];
        }
    }
    
    printf("%d\n", minimumValue);
    
    return 0;
}
#endif


// 퀵소트, 해시맵 월요일까지
