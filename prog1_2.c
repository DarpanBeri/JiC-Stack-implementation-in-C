#include <stdio.h>
#include <stdlib.h>
#include "prog1_2.h"
// Source file which implements the following:
// MakeStack, Push, Pop and Grow functionality.

STACK* MakeStack(int initialCapacity){
    // S is the stack
    // Creating a stack
    STACK *stackPtr;
    stackPtr = (STACK *)malloc(sizeof(STACK));
    
    // Initialising its properties
    stackPtr->data = (int *)malloc(sizeof(int)*initialCapacity);
    stackPtr->size = 0;
    stackPtr->capacity = initialCapacity;
    return stackPtr;
}

void Push(STACK *stackPtr, int data){
    /* Should Grow STACK if there isn't enought capacity */
    if(stackPtr->size == stackPtr->capacity){
        return Grow(stackPtr);
    }
    stackPtr->data[stackPtr->size++] = data;
}

int Pop(STACK *stackPtr){
    /* Returns -1 if there is no data in STACK */
    if(stackPtr->size == 0){
        return -1;
    }
    stackPtr->size--;
    return stackPtr->data[stackPtr->size];
}

void Grow(STACK *stackPtr){
    /* Doubles STACK capacity without changing any values held by the STACK */
    stackPtr->capacity *= 2;
    stackPtr->data = (int *)realloc(stackPtr->data, stackPtr->capacity * sizeof(int));
}

//int main(int argc, char *argv[]){
    /* TEST:
    STACK *stackPtr = MakeStack(2);
    Push(stackPtr, 5);
    Push(stackPtr, 3);
    Push(stackPtr, 4);
    Push(stackPtr, 6);    
    printf("%d\n",Pop(stackPtr));
    printf("%d\n",Pop(stackPtr));
    printf("%d\n",Pop(stackPtr));
    END TEST */
    //return 0;
//}
