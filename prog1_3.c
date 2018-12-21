#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "prog1_2.h"

/* Driver program */

char * trim(char *c) {
    char * e = c + strlen(c) - 1;
    while(*c && isspace(*c)) c++;
    while(e > c && isspace(*e)) *e-- = '\0';
    return c;
}

int main(int argc, char *argv[]){

    if(argc == 2){
        // driver program
        int n = atoi(argv[1]); // number of times to take the input in
        STACK *stackPtr = MakeStack(10);
        char input[256];
        char copy[256];
        char *ptr;
        char * pch;
        char push[] = "push";
        char pop[] = "pop";
        int count = 0;
        int num = 0;
        for(int i=0; i<n; i++){
            //do driver stuff
            printf("> ");
            fgets(input, 256, stdin);
            trim(input);
            strcpy(copy, input);
            int count = 0;
            ptr = strtok(copy, " ");
            while(ptr != NULL) {
                count++;
                ptr = strtok(NULL, " ");
            }
            //printf("%d\n", count);
            if(count == 1){
                pch = strtok(input, " ");
                if (strcmp(pch, pop) == 0){
                    printf("%d\n",Pop(stackPtr));
                }
            }
            if(count == 2){
                pch = strtok(input, " ");
                if (strcmp(pch, push) == 0){
                    pch = strtok(NULL, " ");
                    num = atoi(pch);
                    Push(stackPtr, num);
                }
            }
        }
        exit(1);
    }
    // Incorrect command line arg:
    printf("This program expects a single command line argument.\n");
}
