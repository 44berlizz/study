//
//  Challenge03.c
//  C
//
//  Created by berlizz on 2018. 2. 11..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include "Challenge.h"

#ifdef CH03
int main() {
    int first, second, result = 0;
    printf("input : ");
    scanf("%d %d", &first, &second);
    
    int j = (first <= second) ? first : second;
    for(int i=1; i<=j; i++) {
        if(first % i == 0 && second % i ==0) {
            result = i;
        }
    }
    
    printf("result : %d", result);
    
    return 0;
}
#endif
