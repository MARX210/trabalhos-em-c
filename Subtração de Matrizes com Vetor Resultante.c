#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int MAT1[2][3], MAT2[3][2], VET[6];
    int L_ind1=0, C_ind1=0, indL2 = 0, indC2 = 0, contvet = 0;


    while(L_ind1 <= 2){
        while(C_ind1 <= 3){
            printf(" INFORME UM VALOR MAT1  posição:  ");
            scanf("%d", &MAT1[L_ind1][C_ind1]);

            L_ind1++;
            C_ind1++;

        }
    }

    while(indL2 <= 3){
        while(indC2 <= 2){
            printf("INFORME UM VALOR MAT2  posição: ");
            scanf("%d",&MAT2[indL2][indC2]);

            indL2++;
            indC2++;
        }
    }


    L_ind1 = 0;
    C_ind1 = 0;
    indL2 = 3;
    indC2 = 2;

    for(contvet = 5; contvet >= 0; contvet--){
        VET[contvet] = MAT1[L_ind1][C_ind1] - MAT2 [indL2][indC2];

        L_ind1++;
        C_ind1++;
        indL2--;
        indC2--;
        if(C_ind1 > 3){
            L_ind1++;
            C_ind1 = 0;
        }

        if(indC2 < 0){
            indL2--;
            indC2 = 2;
        }

    }


    contvet = 0;

    for(L_ind1 = 0; L_ind1 < 2; L_ind1++){
        for(C_ind1 = 0; C_ind1 < 3; C_ind1++){
            printf(" Valor da matriz1 posição[%d][%d]: %d\n", L_ind1, C_ind1, MAT1[L_ind1][C_ind1]);
        }
    }

    for(indL2 = 0; indL2 < 3; indL2++){
        for(indC2 = 0; indC2 < 2; indC2++){
            printf(" Valor da matriz2 posição[%d][%d]: %d\n", indL2, indC2, MAT2[indL2][indC2]);
        }
    }

    while(contvet < 6){
        printf(" Vetor subtração posição [%d]:  %d\n", contvet, VET[contvet]);
    }


}
