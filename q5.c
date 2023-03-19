#include <stdio.h>
/*asagidaki structlarin sizelarini inceleyiniz
https://gcc.gnu.org/onlinedocs/gcc/Common-Type-Attributes.html#Common-Type-Attributes
*/

int main(){
    struct  {
        char c1[1];

    } a;
    
    struct  {
        char c1[1];

    }__attribute__((aligned))    b;
    
    struct  {
        char c1[1];

    }__attribute__((aligned(2)))    c;
    
    struct {
        char c1[1];

    }__attribute__((aligned(4)))    d;
    
    struct  {
        char c1[1];

    }__attribute__((aligned(8)))    e;
    
    struct  {
        char c1[1];

    }__attribute__((aligned(16)))    f;
    
    printf("a:%d b:%d c:%d d:%d e:%d f:%d\n",
            sizeof(a), sizeof(b), sizeof(c), 
            sizeof(d), sizeof(e), sizeof(f));
    
}
