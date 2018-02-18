//
//  Hash.c
//  C
//
//  Created by berlizz on 2018. 2. 19..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include "Challenge.h"

#ifdef CH02HS

int getHash(char * string) {
    return string[0] % 10;
}

int main() {
    char * valueArr[10];
    char key[10];
    char value[10];
    printf("키 밸류 입력: ");
    scanf("%s", key);
    printf("밸류 입력: ");
    scanf("%s", value);
    
    valueArr[getHash(key)] = value;
    
    printf("찾는 밸류 키 입력: ");
    scanf("%s", key);
    printf("밸류: %s", valueArr[getHash(key)]);
    
    return 0;
}

#endif
