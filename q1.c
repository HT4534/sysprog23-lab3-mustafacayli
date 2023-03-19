#include <stdio.h>

/*bu programi calistirarak ne yazdirdigini inceleyiniz*/
int main(int argc, char **argv)
{
        
    struct s0 {
        char data[1]; //data
        char c2[]; //pointer to the end of struct
    }     a;

        
   
    
    printf("%p %p %p", &a.data,  &a.c2, a.c2);


    printf("%d", sizeof(a));
    return 0;
}
