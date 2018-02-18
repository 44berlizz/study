//
//  Challenge04.c
//  C
//
//  Created by berlizz on 2018. 2. 19..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "Challenge.h"

#ifdef CH0204

int isPalindrome(char string[], int length) {
    for(int i=0; i<length / 2; i++) {
        if(string[i] != string[length - 1 - i]) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char * string;
    printf("문자열 입력: ");
    scanf("%s", string);
    
    if(isPalindrome(string, strlen(string))) {
        printf("회문 입니다");
    } else {
        printf("회문 ㄴㄴㄴ");
    }
    
    printf("\n");
    return 0;
}

#endif

