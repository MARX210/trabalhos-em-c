#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//atividade 02
int main()
{
    setlocale(LC_ALL, "");
    int num1,num2,num3;
    printf("DIGITE O PRIMEIRO NÚMERO: ");
    scanf("%d",&num1);
    printf("DIGITE O SEGUNDO NÚMERO: ");
    scanf("%d",&num2);
    printf("DIGITE O TERCEIRO NÚMERO: ");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3){
        printf("O MAIOR NÚMERO É: %d\n",num1);
    }else{
        if(num2>num1 && num2>num3){
                printf("O MAIOR NÚMERO É: %d\n",num2);
        }else{
            if(num3>num1 && num3>num2){
                printf("O MAIOR NÚMERO É: %d\n",num3);
            }
        }
    }
    if(num1<num2 && num1<num3){
        printf("O MENOR NÚMERO É: %d\n",num1);
    }else{
        if(num2<num1 && num2<num3){
                printf("O MENOR NÚMERO É: %d\n",num2);
            }else{
                if(num3<num1 && num3<num2){
                    printf("O MENOR NÚMERO É: %d\n",num3);
                }
            }
    }

}
