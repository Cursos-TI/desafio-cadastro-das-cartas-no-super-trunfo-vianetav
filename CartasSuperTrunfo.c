#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Aluna Viviane Tavares Nascimento matrícula 202504564977

int main(){
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //foram criadas variáveis para cada carta a ser cadastrada e exibida.
    //variaveis char: Estado, código da carta, nome da cidade, para as duas cartas que serão definidas
    char estado[3],codigocarta[5],nomecidade[20],estado2[3],codigocarta2[5],nomecidade2[20];
    //variaveis float: área e pib, para as duas cartas (indicada por 2)
    float area,pib,area2,pib2;
    //adicionar as variáveis para calcular a densidade populacional e PIB per capita
    float densidadepop1,densidadepop2,pibcapita1,pibcapita2;
    //variaveis int: população e quantidade de pontos de turismo, indicada por 2
    //para o nível mestre: população como unsigned long int. A variável para os pontos turísticos continua como int. 
    //int populacao,turismo,populacao2,turismo2;
    int turismo,turismo2;
    unsigned long int populacao,populacao2;
    //incluir as variáveis Super Poder 1 e Super Poder 2, para calcular a soma dos valores das cartas!
    float superpoder1,superpoder2;
    //para o nível aventureiro - Tema 2: inclui a variável jogo, um inteiro para ajudar na escolha da comparação
    //como a comparação sem escolha do usuário era parte do nível novato, mantive essa opção, mas achei melhor comentar
    int jogo1, jogo2;
    // aqui, para o nível mestre, do Tema 2: incluir as variáveis para o ataque, defesa e recuo
    int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;
    int atributo1, atributo2, resultado1;
    float soma1, soma2; // para guardar os valores para cada comparação

    soma1 = 0; // forçar o valor a ser igual a zero
    soma2 = 0; // forçar o valor a ser igual a zero

    printf("Bem-vindo ao Super Trunfo! \n");
    printf("A primeira etapa do nosso jogo é fazer o cadastro de duas cartas! \n");
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Nesse trecho, o usuário é avisado que deverá cadastrar duas cartas.
    printf("Você irá cadastrar duas cartas no momento! \n");
    //início da inclusão dos dados para a carta 1
    printf("Dados da carta número 1. \n");
    printf("Estado: \n");
    scanf("%s", estado);
    printf("Código: \n");
    scanf("%s", codigocarta);
    printf("Nome da Cidade: \n");
    scanf("%s", nomecidade);
    printf("População: \n");
    scanf("%lu", &populacao);
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

    //calcular o Super Poder para a carta 1: 
    superpoder1=(float)(populacao+area+pib+turismo+pibcapita1+(1/densidadepop1));
    
    //inclusão dos dados da carta 2
    printf("Dados da carta número 2. \n");
    printf("Estado: \n");
    scanf("%s", estado2);
    printf("Código: \n");
    scanf("%s", codigocarta2);
    printf("Nome da Cidade: \n");
    scanf("%s", nomecidade2);
    printf("População: \n");
    scanf("%lu", &populacao2);
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

    //calcular o Super Poder para a carta 2: 
    superpoder2=(float)(populacao2+area2+pib2+turismo2+pibcapita2+(1/densidadepop2));
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("As cartas cadastradas foram: \n");
    //exibir dados para as cartas 1
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigocarta);
    printf("Nome da Cidade: %s \n", nomecidade);
    printf("População: %lu \n", populacao);
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
    printf("População: %lu \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turismo2);
    printf("Densidade Populacional: %.2f \n", densidadepop2);
    printf("PIB: %.2f \n", pibcapita2);
    
    //as cartas devem ser comparadas por atributo: vou fazer um printf e mostrar o resultado de cada comparação, como está na explicação da disciplina
    // esta parte foi comentada para o desafio no nível mestre    
    //printf("Aqui serão comparados os valores da cidade 1 e da cidade 2! A cidade 1 é a referência.");
    //printf("População: Cidade 1 X Cidade 2: %lu", populacao >= populacao2);
    //printf("Área: Cidade 1 X Cidade 2: %d", area >= area2);
    //printf("PIB: Cidade 1 X Cidade 2: %d", pib >= pib2);
    //printf("Pontos turísticos: Cidade 1 X Cidade 2: %d", turismo >= turismo2);
    //printf("Densidade populacional: Cidade 1 X Cidade 2: %d", densidadepop1 >= densidadepop2);
    //printf("PIB per capita: Cidade 1 X Cidade 2: %d", pibcapita1 >= pibcapita2);
    //printf("Super Poder: Cidade 1 X Cidade 2: %d", superpoder1 >= superpoder2);

    //fazer a comparação entre as duas cartas e declarar a vencedora
    //a escolha é minha, e não do usuário. Vou fazer a comparação entre os pontos turísticos
    //a carta com maior valor vence, a carta com menor valor perde
    //essa parte foi comentada para a inclusão do nível aventureiro   
    //printf("A primeira comparação do jogo é para a quantidade de pontos turísticos declarados! \n");
    //if (turismo > turismo2) {
    //    printf("A carta %s tem o maior valor de pontos turísticos! \n", nomecidade);
    //    printf("A carta %s é a vencedora! \n", nomecidade);
    //} else {
    //    printf("A carta %s tem o maior número de pontos turísticos! \n", nomecidade2);
    //    printf("A carta %s é a vencedora! \n", nomecidade2);
    //}

    printf("Faça a sua escolha do primeiro atributo que será comparado: \n");
    //printf("Qual carta você deseja comparar? \n");
    //scanf("%d", &carta);
    printf("Escolha 1: comparar a população. \n");
    printf("Escolha 2: comparar a área. \n");
    printf("Escolha 3: comparar o PIB. \n");
    printf("Escolha 4: comparar o número de pontos turísticos. \n");
    printf("Escolha 5: comparar as densidades demográficas. \n");
    printf("Um lembrete: para a densidade demográfica, a carta com o menor valor vence. \n");    
    scanf("%d", &jogo1);
   
    switch (jogo1) {
        case 1:
               //if (populacao > populacao2) {
                    printf("O nome das duas cidades participantes do jogo são %s e %s \n" , nomecidade, nomecidade2);
                    printf("O atributo de comparação é a população. Os valores para esse atributo são %lu e %lu. \n", populacao, populacao2); 
                   soma1 = (float) soma1 + populacao;
                   soma2 = (float) soma2 + populacao2;                                    
                    //printf("A carta %d é a vencedora! \n", carta);
                //} else if  (populacao2 > populacao) {
                  //  printf("O nome das duas cidades participantes do jogo são %s e %s \n", nomecidade, nomecidade2);
                  //  printf("O atributo de comparação é a população. Os valores para esse atributo são %d e %d. \n", populacao, populacao2); 
                    //printf("A carta %d é a vencedora! \n", carta);
               //} else if (populacao2 = populacao){
                   //printf("Temos um empate! \n");
                 //  printf("O nome das duas cidades participantes do jogo são %s e %s \n" , nomecidade, nomecidade2);
                 //  printf("O atributo de comparação é a população. Os valores para esse atributo são %d e %d. \n", populacao, populacao2);             
               //} else {
                 //  printf("Você não fez uma escolha válida! Recomece o jogo! \n");
        break;
        case 2:
               //if (area > area2) {
                    printf("O nome das duas cidades participantes do jogo são %s e %s \n" , nomecidade, nomecidade2);
                    printf("O atributo de comparação é a área. Os valores para esse atributo são %f e %f. \n", area, area2);
                    soma1 = (float) soma1 + area;
                    soma2 = (float) soma2 + area2;
                    //printf("A carta %d é a vencedora! \n", carta);
                //} else if  (area2 > area) {
                  //  printf("O nome das duas cidades participantes do jogo são %s e %s \n" , nomecidade, nomecidade2);
                  //  printf("O atributo de comparação é a área. Os valores para esse atributo são %f e %f. \n", area, area2); 
                    //printf("A carta %d é a vencedora! \n", carta);
               //} else if (area2 = area){
                   //printf("Temos um empate! \n");
                 //  printf("O nome das duas cidades participantes do jogo são %s e %s \n" , nomecidade, nomecidade2);
                 //  printf("O atributo de comparação é a população. Os valores para esse atributo são %f e %f. \n", area, area2);             
               //} else {
                 //  printf("Você não fez uma escolha válida! Recomece o jogo! \n");
        break;
        case 3:
               //if (pib > pib2) {
                   printf("O nome das duas cidades participantes do jogo são %s e %s \n", nomecidade, nomecidade2);
                   printf("O atributo de comparação é o PIB. Os valores para esse atributo são %f e %f. \n", pib, pib2); 
                   soma1 = (float) soma1 + pib;   
                   soma2 = (float) soma2 + pib2;
                //printf("A carta %d é a vencedora! \n", carta);
                //} else if  (pib2 > pib) {
                  //  printf("O nome das duas cidades participantes do jogo são %s e %s \n", nomecidade, nomecidade2);
                 //   printf("O atributo de comparação é o PIB. Os valores para esse atributo são %f e %f. \n", pib, pib2); 
                    //printf("A carta %d é a vencedora! \n", carta);
               //} else if (pib2 = pib){
                   //printf("Temos um empate! \n");
                 //  printf("O nome das duas cidades participantes do jogo são %s e %s \n", nomecidade, nomecidade2);
                   //printf("O atributo de comparação é o PIB. Os valores para esse atributo são %f e %f. \n", pib, pib2);             
               //} else {
                 //  printf("Você não fez uma escolha válida! Recomece o jogo! \n");
        break;
        case 4:
               //if (turismo > turismo2) {
                    printf("O nome das duas cidades participantes do jogo são %s e %s \n", nomecidade, nomecidade2);
                    printf("O atributo de comparação é a quantidade de pontos turísticos. Os valores para esse atributo são %d e %d. \n", turismo, turismo2); 
                    soma1 = (float) soma1 + turismo;            
                    soma2 = (float) soma2 + turismo2;
            //printf("A carta %d é a vencedora! \n", carta);
                //} else if  (turismo2 > turismo && carta = 2) {
                 //   printf("O nome das duas cidades participantes do jogo são %s e %s \n", nomecidade, nomecidade2);
                 //   printf("O atributo de comparação é a quantidade de pontos turísticos. Os valores para esse atributo são %d e %d. \n", turismo, turismo2); 
                    //printf("A carta %d é a vencedora! \n", carta);
               //} else if (turismo2 = turismo){
                   //printf("Temos um empate! \n");
                 //  printf("O nome das duas cidades participantes do jogo são %s e %s \n", nomecidade, nomecidade2);
                 //  printf("O atributo de comparação é a quantidade de pontos turísticos. Os valores para esse atributo são %d e %d. \n", turismo, turismo2);             
               //} else {
                 //  printf("Você não fez uma escolha válida! Recomece o jogo! \n");
        break;
        case 5:
             //  if (densidadepop1 < densidadepop2) {
                    printf("O nome das duas cidades participantes do jogo são %s e %s \n", nomecidade, nomecidade2);
                    printf("O atributo de comparação é a densidade demográfica. Os valores para esse atributo são %f e %f. \n", densidadepop1, densidadepop2); 
                    soma1 = (float) soma1 + (1/densidadepop1);        
                    soma2 = (float) soma2 + (1/densidadepop2);
            //printf("A carta %d é a vencedora! \n", carta);
               // } else if  (densidadepop2 < densidadepop1) {
               //     printf("O nome das duas cidades participantes do jogo são %s e %s \n", nomecidade, nomecidade2);
               //     printf("O atributo de comparação é a densidade demográfica. Os valores para esse atributo são %f e %f. \n", densidadepop1, densidadepop2); 
                    //printf("A carta %d é a vencedora! \n", carta);
              // } else if (densidadepop2 = densidadepop1){
                   //printf("Temos um empate! \n");
                //   printf("O nome das duas cidades participantes do jogo são %s e %s \n", nomecidade, nomecidade2);
                //   printf("O atributo de comparação é a densidade demográfica. Os valores para esse atributo são %f e %f. \n", densidadepop1, densidadepop2);             
               //} else {
               //    printf("Você não fez uma escolha válida! Recomece o jogo! \n");
        break;
        default:
           printf("Você fez uma escolha inválida! \n");
        break;  
    }
            
    printf("Faça a sua escolha de quais atributos serão comparados: \n");
    //printf("Qual carta você deseja comparar? \n");
    //scanf("%d", &carta);
    printf("Escolha 1: comparar a população. \n");
    printf("Escolha 2: comparar a área. \n");
    printf("Escolha 3: comparar o PIB. \n");
    printf("Escolha 4: comparar o número de pontos turísticos. \n");
    printf("Escolha 5: comparar as densidades demográficas. \n");
    printf("Um lembrete: para a densidade demográfica, a carta com o menor valor vence. \n");    
    scanf("%d", &jogo2);

    if (jogo1 == jogo2) {
        printf("Você escolheu o mesmo atributo! \n");
    } else {
    switch (jogo2) {
        case 1:
                    printf("O nome das duas cidades participantes do jogo são %s e %s \n" , nomecidade, nomecidade2);
                    printf("O atributo de comparação é a população. Os valores para esse atributo são %lu e %lu. \n", populacao, populacao2); 
                    soma1 = (float) soma1 + populacao;        
                    soma2 = (float) soma2 + populacao;
        break;
        case 2:
               
                    printf("O nome das duas cidades participantes do jogo são %s e %s \n" , nomecidade, nomecidade2);
                    printf("O atributo de comparação é a área. Os valores para esse atributo são %f e %f. \n", area, area2); 
                    soma1 = (float) soma1 + area;
                    soma2 = (float) soma2 + area2;
        break;
        case 3:
                    printf("O nome das duas cidades participantes do jogo são %s e %s \n", nomecidade, nomecidade2);
                    printf("O atributo de comparação é o PIB. Os valores para esse atributo são %f e %f. \n", pib, pib2); 
                    soma1 = (float) soma1 + pib;
                    soma2 = (float) soma2 + pib2;
        break;
        case 4:
                    printf("O nome das duas cidades participantes do jogo são %s e %s \n", nomecidade, nomecidade2);
                    printf("O atributo de comparação é a quantidade de pontos turísticos. Os valores para esse atributo são %d e %d. \n", turismo, turismo2); 
                    soma1 = (float) soma1 + turismo;
                    soma2 = (float) soma2+ turismo2;
        break;
        case 5:
                    printf("O nome das duas cidades participantes do jogo são %s e %s \n", nomecidade, nomecidade2);
                    printf("O atributo de comparação é a densidade demográfica. Os valores para esse atributo são %f e %f. \n", densidadepop1, densidadepop2); 
                    soma1 = (float) soma1 + (1/densidadepop1);   
                    soma2 = (float) soma2+ (1/densidadepop2); 
        break;
        default:
           printf("Você fez uma escolha inválida! \n");    
        break;
     }
    }
            
    // escolha dos atributos
    printf("Escolha do atributo: ataque, defesa ou recuo. \n");
    printf("Escolha A ou a para o ataque \n");
    printf("Escolha D ou d para a defesa \n");
    printf("Escolha R ou r para o recuo \n");
    printf("Escolha o Atributo 1 de comparação \n");
    scanf("%c", &atributo1);
    
    switch (atributo1) {
        case 'A':
        case 'a':
               printf("Você escolheu a opção ataque! \n");
               resultado1 = soma1 > soma2 ? 1 : 0;
        break;
        case 'D':
        case 'd':
               printf("Você escolheu a opção defesa! \n");
               resultado1 = soma1 > soma2 ? 1 : 0;
        break;
        case 'R':
        case 'r':
               printf("Você escolheu a opção recuo! \n");
               resultado1 = soma1 > soma2 ? 1 : 0;
        break;
        default:
            printf("Você fez uma escolha inválida. \n");
        break;
    }
    
    //lógica da comparação dos atributos
    // uso dos operadores lógicos para verificar o resultado!
    if (resultado1 == 1) {
        printf("Você venceu o Super Trunfo! \n");
    } else if (resultado1 == 0) {
        printf("Você perdeu o Super Trunfo! \n");
    } else {
        printf("Você empatou o Super Trunfo! \n");
    }
          
    //retorno zero.
    return 0;
}
