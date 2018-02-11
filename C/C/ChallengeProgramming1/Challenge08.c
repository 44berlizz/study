//
//  Challenge08.c
//  C
//
//  Created by berlizz on 2018. 2. 11..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include "Challenge.h"

#ifdef CH08
int calculator(int number) {
    if(number == 0) {
        return 1;
    } else {
        return 2 * calculator(number - 1);
    }
}

int main() {
    int number;
    printf("input : ");
    scanf("%d", &number);
    printf("2의 %d승은 %d", number, calculator(number));
    
    return 0;
}
#endif
