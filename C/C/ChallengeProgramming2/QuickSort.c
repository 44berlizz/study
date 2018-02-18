//
//  QuickSort.c
//  C
//
//  Created by berlizz on 2018. 2. 19..
//  Copyright © 2018년 berlizz. All rights reserved.
//

#include <stdio.h>
#include "Challenge.h"

#ifdef CH02QS

void swap(int arr[], int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int partition(int arr[], int left, int right) {
    int pivot = arr[left];
    int low = left + 1;
    int high = right;
    
    while(low <= high) {
        while(low <= right && pivot >= arr[low]) {
            low++;
        }
        
        while(high >= (left + 1) && pivot <= arr[high]) {
            high--;
        }
        
        if(low <= high) {
            swap(arr, left, high);
        }
    }
    
    swap(arr, left, high);
    
    return high;
}

void quickSort(int arr[], int left, int right) {
    if(left <= right) {
        int pivotIndex = partition(arr, left, right);
        
        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1 , right);
    }
}

int main() {
    int arr[10];
    int value = 10;
    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        arr[i] = value;
        value--;
    }
    
    quickSort(arr, 0, sizeof(arr)/sizeof(int) - 1);
    
    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}

#endif
