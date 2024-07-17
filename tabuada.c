/*

algoritmo

-------------------------------ENTRADA-----------------------------
biblioteca
numeroInteiro
numeroMultiplo

----------------------------PROCESSAMENTO--------------------------
Entrada do usuario;
loop for;
numeroInteiro * numeroMultiplo;

------------------------------- SAÍDA------------------------------

Resultado = numeroInteiro * numeroMultiplo

*/

#include<stdio.h>

int main()
{
    int numeroInteiro;
    int numeroMultiplo;

    printf("qual seu número para tabuada?");
    scanf("%d", &numeroMultiplo);
    printf("Tabuada: %d\n", numeroMultiplo);

    for (numeroInteiro = 1; numeroInteiro <= 10; numeroInteiro++)
    {
        printf("%d * %d = %d\n", numeroInteiro, numeroMultiplo, numeroMultiplo*numeroInteiro);
    }
    
    return 0;
}
