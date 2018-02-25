//
//  Challenge03.c
//  C
//
//  Created by berlizz on 2018. 2. 26..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Challenge.h"

#ifdef CH0303

int main() {
    for(int i=0; i<5; i++) {
        printf("난수 출력 : %d\n", rand() % 100);
    }
    
    return 0;
}

#endif
