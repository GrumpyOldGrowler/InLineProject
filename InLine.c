#include <stdio.h>

#define XSIZE   5
#define YSIZE   6

#define XOFFSET 10
#define YOFFSET 20

#define EMPTY   0
#define KRYDS   1
#define BOLLE   2

#define DEBUGLEVEL 0

void main (void) {
    int i,j;
    int arena[XSIZE][YSIZE];


#if DEBUGLEVEL > 2
    printf("Hello World\n");
#endif

    for ( i = 0; i < XSIZE; i++)
        for ( j = 0; j < YSIZE; j++)
        {
            arena[i][j] = EMPTY;
        }
    

    for (i = 0; i < XSIZE; i++){
        for ( j = 0; j < YSIZE; j++)
        {
        
            //printf("\e[1A");
            printf("\e[%d;%dH",i + XOFFSET, j + YOFFSET);
            printf("%d", arena[i][j]);
        }
    }
        
    printf("\n");
}
