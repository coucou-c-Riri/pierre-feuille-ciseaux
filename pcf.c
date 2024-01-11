#include <stdio.h>
#include <stdlib.h>

void pfc(){
    int j1;
    int j2;
    int scorej1 = 0;
    int scorej2 = 0;
    while(scorej1 < 10 && scorej2 < 10){
        j1 = j2 = 0;
        do{
            printf("tour j1 -> 1: pierre 2: feuille 3: ciseaux ");
            scanf("%d",&j1);
        }while(j1 < 1 || j1 > 3);

        do{
            printf("1: pierre 2: feuille 3: ciseaux ");
            scanf("%d", &j2);
        }while(j2 < 1 || j2 > 3);
        
        if(j1 == (j2+1)%3){
            scorej1++;
        }else if(j1 == j2){;}
        else{
            scorej2++;
        }
        printf("j1 : %d j2 : %d\n", scorej1, scorej2);
    }
}

int main(){
    pfc();
    return 0;
}