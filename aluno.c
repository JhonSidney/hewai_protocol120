#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno
{
    char nome[50];
    int idade;
    float notaFinal;
}aluno;

int main()
{
    int i;
    aluno alunos[3];
    float MaiorNotaFinal = 0;
    int indiceNota = 0;
    
    
    for(i=0; i <3; i++){
    printf("CADASTRO DO ALUNO %d\n", i+1);
    printf("NOME:");
    fgets(alunos[i].nome, 50, stdin);
    
    
    printf("IDADE:");
    scanf("%d", &alunos[i].idade);
    
    printf("NOTA:");
    scanf("%f", &alunos[i].notaFinal);
    getchar();
     
    system("clear");
    
    if(alunos[i].notaFinal > MaiorNotaFinal){
            MaiorNotaFinal = alunos[i].notaFinal;
            indiceNota = i;
      }
    } 
    
     for(i=0; i <3; i++){
        printf("\n-------------aluno%d------------\n", i+1);
        printf("\nNOME:%s", alunos[i].nome);
        printf("IDADE:%d", alunos[i].idade);
        printf("\nNOTA:%.1f", alunos[i].notaFinal);
       }
       
       printf("\n-------------aluno------------\n");
       printf("\nAluno com a maior nota: %s", alunos[indiceNota].nome);
       printf("\nNota: %.1f",  MaiorNotaFinal);
   
    
    return 0;
}