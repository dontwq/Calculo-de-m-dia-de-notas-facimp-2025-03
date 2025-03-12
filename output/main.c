#include <stdio.h>

int main() {
    float av, av_a, simulado, total, avs;
    char fez_avs;
    
    // Entrada das notas
    printf("Digite a nota da Prova AV (0 a 7): ");
    scanf("%f", &av);
    if (av > 7) av = 7;
    
    printf("Digite a nota da Atividade AV A (0 a 3): ");
    scanf("%f", &av_a);
    if (av_a > 3) av_a = 3;
    
    printf("Digite a nota do Simulado (0 a 2): ");
    scanf("%f", &simulado);
    if (simulado > 2) simulado = 2;
    
    // Cálculo da nota total
    total = (av + av_a) + simulado;
    if (total > 10) total = 10;
    
    printf("\nNota final: %.2f\n", total);
    
    if (total >= 6) {
        printf("Aluno aprovado!\n");
    } else {
        // Perguntar sobre a AVS
        printf("Aluno não atingiu a média. Fez a Prova AVS? (S/N): ");
        scanf(" %c", &fez_avs);
        
        if (fez_avs == 'S' || fez_avs == 's') {
            printf("Digite a nota da Prova AVS (0 a 10): ");
            scanf("%f", &avs);
            if (avs > 10) avs = 10;
            
            if (avs >= 6) {
                printf("Aluno aprovado na recuperação!\n");
            } else {
                printf("Aluno reprovado.\n");
            }
        } else {
            printf("Aluno reprovado por não ter feito a AVS.\n");
        }
    }
    
    return 0;
}

