#include <stdio.h>
/*bu progrmai calistirarak ne yazdirdigini inceleyiniz*/
int main(){
    struct s0 {
        char c1[1];
        char c2[]; 
    } a;
    
    struct s1 {
        char c1[1];
        int c2[]; 
    }     b;
    
    struct s2 {
        char c1[1];
        double c2[]; 
    }     c;
    
    printf("sizeof(a):%d sizeof(b):%d sizeof(c):%d\n", sizeof(a), sizeof(b), sizeof(c));
    
}
