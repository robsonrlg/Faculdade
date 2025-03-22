#include <stdio.h>
#include <stdlib.h>

 typedef struct aluno {
    char nome[40];
    float A1,A2,A3;  
	float media; 
 }Aluno;
/* Com o uso do typedef uma vari�vel do tipo "struct aluno" pode ser declarada
 apenas como "Aluno" */

int main(int argc, char *argv[])
{
   Aluno a; // a vari�vel "a" foi declarada j� usando a redefini��o de tipo
    
   printf("Informe o nome do Aluno: "); 
   scanf("%[^\n]",a.nome);
   printf("Informe a nota da A1: "); 
   scanf("%f",&a.A1);  
   printf("Informe a nota da A2: ");   
   scanf("%f",&a.A2);
   printf("Informe a nota da A3: ");     
   scanf("%f",&a.A3);
   
   /*O & foi usado, pois a fun��o "scanf" necessita saber o endere�o da vari�vel.
   No caso do nome n�o foi necess�rio, pois em C um String � tratado como um vetor
   de caracteres e o nome dado a um vetor sempre representa o endere�o
   da sua primeira posi��o.*/

   printf("Nome: %s V1: %.2f  V2: %.2f  VT: %.2f \n",a.nome,a.A1,a.A2,a.A3);
   
   system("PAUSE");	
   return 0;
}
