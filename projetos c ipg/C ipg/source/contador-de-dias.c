#include <stdio.h>

int main(){
    int dia, mes, ano,data, totaldias = 0, ndias;

    printf("digite a data no modelo: dd mm aaaa\n");
    scanf("%d %d %d",&dia,&mes,&ano);

    for(int a=1; a<ano;a++){

        if((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0))ndias = 366;      
        else ndias =365;
        totaldias+=ndias ;
    }

    for(int m=1; m<mes;m++){
        switch (m){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: ndias=31; break;
            case 4:
            case 6:
            case 9:
            case 11: ndias=30; break;
            case 2:  
                if((ano%4==0) && (ano%100!= 0)||(ano % 400 == 0))ndias = 29;      
                else ndias =28; break;
        }
        totaldias+=ndias;
    }

    totaldias+= dia;

    printf("total dias : %d",totaldias);
 
    return 0;
}