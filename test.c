#define main yourmain
#include "main.c"
#undef main


#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   
    /*pointers to comparison functions */
    int (*fps[])(int *x, int *y) = {cmp0, cmp1};
    
    /*read inputs from stdin */
    int n, target, func;
    char line1[100];
    fgets(line1,100, stdin);
    sscanf(line1, "n:%d target:%d func:%d", &n, &target, &func);
    
    char data[250];
    fgets(data, 250,stdin);
 
    int *a = malloc(n*sizeof(int));
    
    /*convert input into integer array*/
    char *s = strtok(data, " \t");
    int i = 0;
    while(i < n){
         
         if(sscanf(s,"%d", &a[i]) <= 0){
             
             exit(EXIT_FAILURE);
         }
         s = strtok(NULL, " \t");
         i++;
    }

    /*if found, index. if not found, -1*/     
    int result = binarysearch(target,a, n, sizeof(int), fps[func]);
    printf("%d\n", result);
 
   
    return 0;
}


