#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stddef.h>

    typedef struct Card { char *face;
                        char *suit; } Card ;


    int main(){
        int i=0 ;
        char *suit[4] = {"Hearts","Spades","Clubs","Diamonds"};
        char *face[13] = {"Ace","2","3","4","5","6","7","8","9","10","King","Queen","Jack"} ;

        Card deck[52] ;

        srand(time(NULL)) ;

    while(1)
       {
       int same = 0 ;
       int  x = rand()%4 ;
       int  y = rand()%13 ;

        deck[i].face = face[y] ;
        deck[i].suit = suit[x] ;

        for(int j=0;j<i;j++){

        if((deck[i].face==deck[j].face && deck[i].suit==deck[j].suit))
            same =1 ;
            }

        if (same==0)
        {printf("%s of %s\t",deck[i].face,deck[i].suit) ;
        i++ ;
        if(i%4==0 && i!=0) printf("\n") ;
        }

        if(i>51) break ;

        }

}

