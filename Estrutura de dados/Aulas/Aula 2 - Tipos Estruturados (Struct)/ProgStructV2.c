#include <stdio.h>
#include <stdlib.h>

 typedef struct aluno {
    char nome[40];
    float A1,A2,A3;  
	float media; 
 }Aluno,* PAluno;
/* Com o uso do typedef uma vari�vel do tipo "struct aluno" pode ser declarada
 apenas como "Aluno" e um ponteiro para esta estrutura como "PAluno"*/

void incluir_aluno(PAluno a)
{
   /* Repare que no main o struct foi passado po refer�ncia na chamada a deste 
   procedimento. Sendo assim, o que chega como par�metro n�o � uma c�pia do
   struct, mas o endere�o para o in�cio dele na mem�ria. O "C" oferece a seta 
   -> para acessarmos o dados do struct a partir do seu ponteiro. Isto facilita 
   pois o programador n�o precisa escrever, por exemplo, (*a).V1, pois isso equi
   vale a a->V1                   */
      
   printf("Informe o nome do Aluno: "); 
   scanf("%[^\n]",a->nome);
   printf("Informe a nota da A1: "); 
   scanf("%f",&a->A1);  
   printf("Informe a nota da A2: ");   
   scanf("%f",&a->A2);
   printf("Informe a nota do A3: ");     
   scanf("%f",&a->A3);
   
   /*O & foi usado, pois a fun��o "scanf" necessita saber o endere�o da vari�vel.
   No caso do nome n�o foi necess�rio, pois em C um String � tratado como um vetor
   de caracteres e o nome dado a um vetor sempre representa o endere�o
   da sua primeira posi��o.*/
     
}

int main(int argc, char *argv[])
{
   Aluno a; // a vari�vel "a" foi declarada j� usando a redefini��o de tipo
   
   incluir_aluno(&a); 
   
   printf("Nome: %s A1: %.2f  A2: %.2f  A3: %.2f \n",a.nome,a.A1,a.A2,a.A3);
   
   system("PAUSE");	
   return 0;
}
