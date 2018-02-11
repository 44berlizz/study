//
//  Challenge05.c
//  C
//
//  Created by berlizz on 2018. 2. 11..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include "Challenge.h"

#ifdef CH05
int main() {
    int number = 2, isPrimeNumber;
    
    int i = 0;
    while(i < 10) {
        isPrimeNumber = 1;
        for(int j=2; j<number; j++) {
            if(number % j == 0) {
                isPrimeNumber = 0;
            }
        }
        
        if(isPrimeNumber) {
            printf("%d ", number);
            i++;
        }
        
        number++;
    }
    
    return 0;
}
#endif
