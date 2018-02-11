//
//  Challenge06.c
//  C
//
//  Created by berlizz on 2018. 2. 11..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include "Challenge.h"

#ifdef CH06
int main() {
    int number;
    printf("input : ");
    scanf("%d", &number);
    
    int hours = number / 3600;
    number %= 3600;
    int minutes = number / 60;
    int seconds = number % 60;
    
    printf("[h:%d, m:%d, s:%d]", hours, minutes, seconds);
    
    return 0;
}
#endif
