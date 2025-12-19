// PROJETO 1: JOGO DE ADIVINHAÇÃO
// Autor: Wescley Henrique
// Linguagem: C

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <windows.h>

//DEFININDO AS CORES 
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

int main() { 

    srand(time(0)); 

    printf(CYAN "\nPROJETO 1: JOGO DE ADIVINHAÇÃO \n" RESET);
    printf(CYAN"Autor: Wescley Henrique \n"RESET);
    printf(CYAN"Linguagem: C \n \n"RESET);
    printf(CYAN "PRESSIONE ENTER PARA O JOGO COMECAR: \n" RESET);
    getchar();

    int kick;
    int S; 
    int number; 

    do 
    {
        number = rand() % 11; 

        printf("\n-----------------------------------\n");
        printf(CYAN "O COMPUTADOR PENSOU EM UM NUMERO.\n" RESET);
        printf("CHUTE UM NUMERO DE 0 A 10: ");

        if (scanf("%d", &kick) == 0) 
        {
            printf(RED "\nERRO: VOCE DIGITOU UMA LETRA! APENAS NUMEROS SAO ACEITOS.\n" RESET);
        
            // --- LIMPEZA DE BUFFER  ---
            while(getchar() != '\n'); 
        
        continue; // Volta para o início do loop sem contar rodada
        }

        // Validação

        if (kick < 0 || kick > 10)
        {
           
            printf(RED "\nNAO LEU? O NUMERO TEM QUE SER DE 0 A 10.\n" RESET);
        }
        else 
        {
            if (kick == number)
            {
               
                MessageBox(NULL, "PARABENS! Voce Ganhou!", "Vitória", MB_OK | MB_ICONINFORMATION);
            }
            else 
            {
                
                printf(YELLOW "\nQUE PENA! O NUMERO ERA %d.\n" RESET, number);
            }
        }

        printf("\nDESEJA CONTINUAR JOGANDO? DIGITE 1 PARA SIM: ");
        scanf("%d", &S);

    } while (S == 1);

    printf(CYAN "\nObrigado por jogar!\n" RESET);
    system("pause");
    return 0;
}
