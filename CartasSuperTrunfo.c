#include <stdio.h>

int main() {
    //Declarando as variaveis
    // Sinal de igual a qualquer número para remover lixo da memória
    
    int codigo=01;
    char nome[20];
    int populacao=02;
    float area=03;
    float pib=04;
    int pontos=05;
    
    // Solicitar comando do usuario
    printf("Digite o código do país\n");

    //Armazenamento das informaçoes
    scanf("%d", &codigo);

    printf("Digite o nome do país\n");
    scanf("%s", &nome);

    printf("Digite a população:\n");
    scanf("%d", &populacao);

    printf("Digite a area do país:\n");
    scanf("%f", &area);

    printf("Digite o pib do país:\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos);
    
    // Exportando as informações
    //n é para separar as frases
    printf("O código do país é: %d\n", codigo);
    printf("O nome do país é: %s\n", nome);
    printf("A população é de: %d\n", populacao);
    printf("A área é de: %f\n", area);
    printf("O PIB é: %f\n", pib);
    printf("O número de pontos turísticos é de: %d\n", pontos);
    
    
    return 0;
}
