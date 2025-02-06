#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    int main(){
        float p1, p2, p3, p4, ar1, ar2, ar3, ar4, po1, po2, po3, po4, pt1, pt2, pt3, pt4;
        char a1, a2, a3, a4;
        float densidade;
        float pibcap;
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    printf("Digite o nome da cidade 1: \n");
    scanf("%s", &a1);
    printf("Digite a Polução da cidade 1: \n");
    scanf("%f", &po1);
    printf("Digite a area cidade 1: \n");
    scanf("%f", &ar1);
    printf("Digite o PIB cidade 1 \n");
    scanf("%f", &p1);
    printf("Digite o Ponto Turistico cidade 1: \n");
    scanf("%f", &pt1);

    densidade = (float) po1 / ar1;
    printf("Densidade demográfica: %6.f\n", densidade);
    pibcap = (float) p1 / po1;
    printf("O PIB é: %6.f\n", pibcap);
    
    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &a2);
    printf("Digite a Polução da cidade 2: \n");
    scanf("%f", &po2);
    printf("Digite a area cidade 2: \n");
    scanf("%f", &ar2);
    printf("Digite o PIB cidade 2 \n");
    scanf("%f", &p2);
    printf("Digite o Ponto Turistico cidade 2: \n");
    scanf("%f", &pt2);

    densidade = (float) po2 / ar2;
    printf("Densidade demográfica: %6.f\n", densidade);
    pibcap = (float) p2 / po2;
    printf("O PIB é: %6.f\n", pibcap);
    
    printf("Diigite o nome da cidade 3: \n");
    scanf("%s", &a3);
    printf("Digite a Polução da cidade 3: \n");
    scanf("%f", &po3);
    printf("Digite a area cidade 3: \n");
    scanf("%f", &ar3);
    printf("Digite o PIB cidade 3 \n");
    scanf("%f", &p3);
    printf("Digite o Ponto Turistico cidade 3: \n");
    scanf("%f", &pt3);

    densidade = (float) po3 / ar3;
    printf("Densidade demográfica: %6.f\n", densidade);
    pibcap = (float) p3 / po3;
    printf("O PIB é: %6.f\n", pibcap);

    printf("Digite o nome da cidade 4: \n");
    scanf("%s", &a4);
    printf("Digite a Polução da cidade 4: \n");
    scanf("%f", &po4);
    printf("Digite a area cidade 4: \n");
    scanf("%f", &ar4);
    printf("Digite o PIB cidade 4 \n");
    scanf("%f", &p4);
    printf("Digite o Ponto Turistico cidade 4: \n");
    scanf("%f", &pt4);

    densidade = (float) po4 / ar4;
    printf("Densidade demográfica: %6.f\n", densidade);
    pibcap = (float) p4 / po4;
    printf("O PIB é: %6.f\n", pibcap);

    return 0;
}
