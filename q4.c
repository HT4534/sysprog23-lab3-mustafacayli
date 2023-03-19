/*asagidaki structlarin sizeofla kac byte yer kapladigini gosteriniz.*/
struct picture{
        int height; //4 byte
        double** data; //8 byte
        int width; //4 byte
        char* encoding; //8 byte
} p1;

struct picture2{
        char height; //4 byte
        int width; //4 byte
        double** data; //8 byte
        char* encoding; //8 byte
} p2;

