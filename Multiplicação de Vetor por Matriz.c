#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");


    int mat[6][5], lin, col, op2;
    int vet1[15], vet2[15], cont;
    char op;

    /* MENU DE 4 OPÇÕES */
    do{


        printf("\t\t****** MENU ******\n\n");

        printf("<A> informar os valores\n");
        printf("<B> calculo dos valores\n");
        printf("<C> apresentação dos valores\n");
        printf("<D> sair\n\n");

        printf("QUAL A SUA ESCOLHA?  ");
        scanf("%c",&op);

        switch(op){

        /*CASO A, ONDE SERÁ INFORMADO OS 30 VALORES*/

            case 'a':
            case 'A':
                for(lin = 0; lin < 6; lin++){
                    for(col = 0; col < 5; col++){
                        printf("informe os valores inteiros:  ");
                        scanf("%d", &mat[lin][col]);
                    }
                }
                break;

            /*CASO B, ONDE SERÁ FEITO EM 2 VETORES O CALCULO DE
            VET1 SERA A RAIZ QUADRADA DOS NUMEROS 15 PRIMEIROS VALORES;
            VET2 SERÁ O CUBO PARA OS OUTROS 15 VALORES */

            case 'b':
            case 'B':
                for(lin = 0; lin < 6; lin++){
                    for(col = 0; col < 5; col++){
                        for(cont = 0; cont < 30; cont++){
                            if(cont < 15){
                                vet1[cont] = sqrt(mat[lin][col]);

                            }else{
                                vet2[cont] = pow(mat[lin][col],3);

                            }
                            lin++;
                            col++;
                        }
                    }
                }
                break;

            /*CASO C, APRESENTAR OS VALORES MAS PERGUNTAR
            AO USUARIO O QUE ELA QUER QUE SEJA APRESENTADO: TUDO;
            SÓ A MATRIZ; VETOR RAIZ OU O VETOR CUBO */

            case 'c':
            case 'C':

                printf("<1> apresentar todos os valores\n");
                printf("<2> apresentar só a matriz\n");
                printf("<3> apresentar o vetor com a raiz\n");
                printf("<4> apresentar o vetor com o cubo\n\n");
                printf("QUAL A SUA ESCOLHA?  ");
                scanf("%d", &op2);

                switch(op2){

                    case 1:
                        printf("\n\nTODOS OS VALORES\n\n");

                        printf("\n\nMATRIZ\n\n");
                        for(lin = 0; lin < 6; lin++){
                            for(col = 0; col < 5; col++){
                                printf("Posição [%d][%d]: %d\n", lin, col, mat[lin][col]);
                            }
                        }

                        printf("\n\nVETOR RAIZ\n\n");
                        for(cont = 0; cont < 15; cont++){
                            printf("Posição[%d]: %d\n", cont, vet1[cont]);
                        }

                        printf("\n\nVETOR CUBO\n\n");
                        for(cont = 0; cont > 15; cont++){
                            printf("Posição[%d]: %d\n", cont, vet2[cont]);
                        }
                        break;

                    case 2:

                        printf("\n\nMATRIZ\n\n");
                        for(lin = 0; lin < 6; lin++){
                            for(col = 0; col < 5; col++){
                                printf("Posição[%d][%d]: %d\n", lin, col, mat[lin][col]);
                            }
                        }

                        break;

                    case 3:

                        printf("\n\nVETOR RAIZ\n\n");
                        for(cont = 0; cont < 15; cont++){
                            printf("Posição[%d]: %d\n", cont, vet1[cont]);
                        }

                        break;

                    case 4:

                        printf("\n\nVETOR CUBO\n\n");
                        for(cont = 0; cont > 15 ; cont++){
                            printf("Posição[%d]: %d\n", cont, vet2[cont]);
                        }

                        break;
                }
                break;


        /*CASO D, QUANDO O USUARIO DESEJAR SAIR*/

                case 'd':
                case 'D':
                    printf( "--- VOCÊ ESCOLHEU SAIR DO PROGRAMA--- ATÉ LOGO!!!****");
                    break;
                default:
                    printf("*****Opção Inválida!!! Digite uma das opções válidas!*****\n");
                    break;
        }
    }while(op!= 'd' && op != 'D');
}//fim do programa
