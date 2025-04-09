//coment�rio de uma linha
/*coment�rio de m�ltiplas
linhas
independente da
quantidade de linhas

*/
//Partes de um c�digo em C/C++
//Primeira Parte:
//Inser��o de Bibliotecas


#include <locale.h>//para acentua��o no console

//Segunda Parte:
//Defini��es de Macros
#define PI 3.1416
#define Nome "Letsgo de Souza"

//Declara��es de Vari�veis GLOBAIS
// e/ou Declara��es e implementa��es de Fun��es
//ou de escopo de Fun��es

//Programa Principal
//Sintaxe do Programa Principal
//  <tipo de Dado ou vazio> <nome da fun��o>(){
//	   <bloco de comandos>;
//  }

void LbuffTec(void)//Fun��o criada para limpar o Buffer do Teclado



//retorno INTEIRO

 int main(){

  setlocale (LC_ALL, "");
  int A1;// Vari�vel do tipo Inteiro
  int a1, valor;
  float metros, salArio;
  double salario;
  char letra;
  char nome[61] = "";//Ser�o 60 letras + caractere NULO \0.

  //Atribuir - Atribui��o
  A1 = 56;
  a1 = -23465;
  metros = 355.23;
  salArio = 1345;
  letra = 'A';

  //SINTAXE DO COMANDO DE LEITURA DE TECLADO
  // Visual Studio: scanf_s
  // Outra IDES: scanf

  printf("Informe um valor num�rico inteiro: ");
  //scanf("%?",&<nome da vari�vel>);
  scanf("%d", &valor);
  LbuffTec();
  printf("Informe uma Letra do Alfabeto: ");
  scanf("%c", &letra);
  printf("Informe outro valor num�rico inteiro: ");
  scanf("%d", &a1);
  printf("Digite a dist�ncia em Metros: ");
  scanf("%f", &metros);

  printf("Digite a dist�ncia em Metros: ");
  scanf("%f", &metros);
  LbuffTec();
  printf("Informe um nome: ");
  scanf("%[^\n]", &nome, _countof(nome));

  printf("\n");




    //Defini��es e implementa��o de FUN��ES
    //Comandos de apresenta��o de valores
    //  %d ou %i --> Decimal ou Inteiro
    //  %c --> Apenas 1 caractere
    //  %s --> String -- Cadeia de Caracteres
    //  %f --> Ponto Flutuante ou FLOAT ou DOUBLE


    //Sintaxe da declara��o de vari�veis
    // <Tipo de Dado> <nome da vari�vel>;
    // <Tipo de Dado> <nome da vari�vel1>,...,<nome da vari�velN>;
 }
