//
//  Challenge04.c
//  C
//
//  Created by berlizz on 2018. 2. 26..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Challenge.h"

#ifdef CH0304

int main() {
    
    srand((int)time(NULL));
    printf("주사위 1의 결과 %d\n", rand() % 6 + 1);
    printf("주사위 2의 결과 %d\n", rand() % 6 + 1);
    
    return 0;
}

#endif
