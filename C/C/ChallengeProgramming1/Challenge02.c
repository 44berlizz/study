//
//  Challenge02.c
//  C
//
//  Created by berlizz on 2018. 2. 11..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include "Challenge.h"

#ifdef CH02
int main() {
    int first, second;
    printf("input : ");
    scanf("%d %d", &first, &second);
    
    for(int i=first; i<=second; i++) {
        for(int j=1; j<10; j++) {
            printf("%dX%d=%d ", i, j, i * j);
        }
        printf("\n");
    }
    
    return 0;
}
#endif


