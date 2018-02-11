//
//  Challenge04.c
//  C
//
//  Created by berlizz on 2018. 2. 11..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include "Challenge.h"

#ifdef CH04
int main() {
    for(int i=1; i<5; i++) { // 새우깡
        for(int j=1; j<7; j++) { // 크림빵
            for(int k=1; k<9; k++) { // 콜라
                if((i * 700 + j * 500 + k * 400) == 3500) {
                    printf("크림빵%d개, 새우깡%d개, 콜라%d개\n", j, i, k);
                }
            }
        }
    }
    
    return 0;
}
#endif
