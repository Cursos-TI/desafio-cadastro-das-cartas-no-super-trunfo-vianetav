#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Aluna Viviane Tavares Nascimento matrícula 202504564977

int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //foram criadas variáveis para cada carta a ser cadastrada e exibida.
    //variaveis char: Estado, código da carta, nome da cidade, para as duas cartas que serão definidas
    char estado[1],codigocarta[3],nomecidade[20],estado2[1],codigocarta2[3],nomecidade2[20];
    //variaveis float: área e pib, para as duas cartas (indicada por 2)
    float area,pib,area2,pib2;
    //adicionar as variáveis para calcular a densidade populacional e PIB per capita
    float densidadepop1,densidadepop2,pibcapita1,pibcapita2;
    //variaveis int: população e quantidade de pontos de turismo, indicada por 2
    int populacao,turismo,populacao2,turismo2;
    
        
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Nesse trecho, o usuário é avisado que deverá cadastrar duas cartas.
    printf("Você irá cadastrar duas cartas no momento! \n");
    //início da inclusão dos dados para a carta 1
    printf("Dados da carta número 1. \n");
    printf("Estado: \n");
    scanf("%s", &estado);
    printf("Código: \n");
    scanf("%s", &codigocarta);
    printf("Nome da Cidade: \n");
    scanf("%s", &nomecidade);
    printf("População: \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo);

    //determinar os valores da densidade populacional e do PIB per capita para a carta 1
    //usar o casting para forçar a variável a ser float
    densidadepop1= (float)(populacao/area);
    pibcapita1=(float)(pib/populacao);
    
    //inclusão dos dados da carta 2
    printf("Dados da carta número 2. \n");
    printf("Estado: \n");
    scanf("%s", &estado2);
    printf("Código: \n");
    scanf("%s", &codigocarta2);
    printf("Nome da Cidade: \n");
    scanf("%s", &nomecidade2);
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área: \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo2);

    //determinar os valores da densidade populacional e do PIB per capita para a carta 1
    //usar o casting para forçar a variável a ser float
    densidadepop2= (float)(populacao2/area2);
    pibcapita2=(float)(pib2/populacao2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("As cartas cadastradas foram: \n");
    //exibir dados para as cartas 1
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigocarta);
    printf("Nome da Cidade: %s \n", nomecidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", turismo);
    printf("Densidade Populacional: %.2f \n", densidadepop1);
    printf("PIB per capita: %.2f \n", pibcapita1);

    //exibir dados para as cartas 2
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigocarta2);
    printf("Nome da Cidade: %s \n", nomecidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turismo2);
    printf("Densidade Populacional: %.2f \n", densidadepop2);
    printf("PIB: %.2f \n", pibcapita2);
    
    //retorno zero.
    return 0;
}
