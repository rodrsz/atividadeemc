#include <stdlib.h>
#include <stdio.h>

int main()
{
    int d;
    printf("Digite a nota: ");
    scanf("%d",&d);
    if (d >= 60)
        printf("Aluno Aprovado :D\n");
    
    else
        if(d < 30)
        printf("Aluno Reprovado :P");
        
    
    else
        printf(" o aluno deve fazer a prova de recuperacao \n");
    

    return 0;
}