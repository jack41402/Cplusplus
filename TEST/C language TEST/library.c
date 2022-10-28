#include <stdlib.h>
#include <fcntl.h>
#include <stdint.h>


void init(){
        setvbuf(stdout,0,2,0);
        setvbuf(stdin,0,2,0);
        setvbuf(stderr,0,2,0);
}

void haha_piyen(){
        system("/bin/sh");
}

int main(){

        init();
        char buf[0x100];
        int len = 0;

        printf("In to My Boddddddy!");

        scanf("%s" , buf);

        printf("No you suck");

        return 0;
}
