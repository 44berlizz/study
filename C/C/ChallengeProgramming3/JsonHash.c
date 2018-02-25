//
//  JsonHash.c
//  C
//
//  Created by berlizz on 2018. 2. 26..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Challenge.h"

#ifdef JSON_HASH

int main() {
    FILE * fp = fopen("/Users/berlizz/temp/Study/C/C/ChallengeProgramming3/exam.json", "rt");
    if(fp == NULL) {
        return -1;
    }
    
    char c;
    char str[100];
    int i = 0;
    while((c = fgetc(fp)) != EOF) {
        str[i] = c;
        i++;
    }
    
    printf("%s", str);
    
    i = 0;
    int depth = 0;
    int arr[2][10];
    while(str[i] != NULL) {
        if(i != 1 && str[i] == '{') {
            depth++;
        }
        if(str[i] == '}') {
            depth--;
        }
        
        if(str[i] >= 97 && str[i] <= 122) {
            int index = str[i] % 10;
            arr[depth][index] =
        }
        
//        printf("%c", str[i]);
        i++;
    }
    
    
    
    
    printf("\n");
    fclose(fp);
    return 0;
}

#endif

