#include <stdio.h>

#define DEBUGLEVEL 0

void main (void) {
    int i;

#if DEBUGLEVEL > 0
    printf("Hello World\n");
#endif

    for (i = 10; i < 16; i++){
        
        //printf("\e[1A");
        printf("\e[%d;%dH",i, i+10);
        printf("i == %d", i);
    }
        
    printf("\n");
}
