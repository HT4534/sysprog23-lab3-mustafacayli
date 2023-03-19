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

/*if a>b, returns 1*/
int cmp0(int *a, int *b){
    if (*a > *b) return 1;
    if (*a < *b) return -1;
    return 0;
    
}
/*if a>b, returns -1*/
int cmp1(int *a, int *b){
    if (*a > *b) return -1;
    if (*a < *b) return 1;
    return 0;
    
}



/*

* Complete the 'binarysearch' function below.
* This functions searches the valued pointed by the target in the given
address space.
* The function is expected to
* return an INTEGER that indicates the index of the found value.
* return -1 if the item not found
* The function accepts following parameters:
* 1. target: indicates the address of the searched item
* 2. base: start address of the memory that stores the data
* 3. INTEGER n: number of elements: e.g. 10
* 4. INTEGER esize: element size: e.g. sizeof(int)
* 5. compare(): pointer to a function that compares *a and *b and
* returns positive, 0, negative

*/
int binarysearch(int target, void *base, int n, int esize, int (*compare)(int*, int*)) {

  
}

/*bu program su sekilde calismasi gerekiyor
./main 1 2 3 4 5 6 7
argumanlar sirali diziyi(eleman sayisi belli degil), belirtmektedir.
Sonra kullanicidan sayi alarak arama yapip, eger bu sayi dizide ise 1 degilse 0 yazdiran bir program yaziniz */
int main(int argc, char *argv[]){

}
