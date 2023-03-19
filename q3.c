
#include <stdio.h>

int main(){
    struct  {
        char c1;
        int  i;

    } a;
    
    struct  {
        char c1;
        int  i;
        char c2;

    }  b;
    
    struct  {
        char c1[5];
        int  i;

    } c;
    
    struct  {
        char c1;
        char c2;
        int i;

    }  d;
    
    struct {
        char c1;
        char *cp;
        char c2;

    }  e;
    
    struct  {
        char c1[5];
        char  *cp;

    } f;
    
    printf("a:%d b:%d c:%d d:%d e:%d f:%d\n",
            sizeof(a), sizeof(b), sizeof(c), 
            sizeof(d), sizeof(e), sizeof(f));
    
}
