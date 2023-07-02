#include <stdio.h>

int main(){
    char nome[50];
    int idade, origem, destino, horario, assento;
    
    printf("*********VIACAO REGIONAL***********\n\n");
    
    printf("*****Cadastro de passageiros*******\n\n");
    
    printf("Digite seu primeiro nome: ");
    scanf("%s", &nome);
    
    printf("Insira sua idade: ");
    scanf("%d", &idade);
    
    printf("\n*****Cadastro de passagens********\n\n");
    
	printf("Digite sua origem: \n\n");
  	printf("1 - Ourinhos\n");
   	printf("2 - Salto Grande\n");
   	printf("3 - Chavantes\n");
   	printf("4 - Ipaussu\n");
   	printf("5 - Piraju\n");
   	printf("6 - Marilia\n");
   	printf("7 - Bauru\n");
   	printf("8 - Ibirarema\n");
   	printf("9 - Palmital\n\n");
   	scanf("%d", &origem);
   	
	while (origem < 1 || origem > 9) {
    	printf("\nOpcao invalida. Por favor, digite novamente.\n\n");
    		scanf("%d", &origem);
    }
   
   	printf("\nEscolha seu destino: \n\n");
   	printf("1 - Ourinhos\n");
   	printf("2 - Salto Grande\n");
   	printf("3 - Chavantes\n");
   	printf("4 - Ipaussu\n");
   	printf("5 - Piraju\n");
   	printf("6 - Marilia\n");
   	printf("7 - Bauru\n");
   	printf("8 - Ibirarema\n");
   	printf("9 - Palmital\n\n");
   	scanf("%d", &destino);
   	
   	while (destino < 1 || destino > 9) {
    	printf("\nOpcao invalida. Por favor, digite novamente.\n\n");
    		scanf("%d", &destino);
    }
	
   	printf("\nEscolha o horario de partida: \n\n");
   	printf("1 - 4:00 \n");
   	printf("2 - 8:00 \n");
   	printf("3 - 12:00\n");
   	printf("4 - 16:00\n");
   	printf("5 - 20:00\n");
   	printf("6 - 00:00\n\n");
   	scanf("%d", &horario);
   	
   	while (horario < 1 || horario > 6) {
    	printf("\nOpcao invalida. Por favor, digite novamente.\n\n");
    		scanf("%d", &horario);
    }
   
   	printf("\nEscolha o assento: \n\n");
   	printf("1 - Janela\n");
   	printf("2 - Corredor\n\n");
   	scanf("%d", &assento);
   
	while (assento < 1 || assento > 2) {
    	printf("\nOpcao invalida. Por favor, digite novamente.\n\n");
    		scanf("%d", &assento);
    }
   
   	printf("\nCompra realizada com sucesso!\n\n");
   	printf("Nome: %s\n", nome);
   	printf("Idade: %d\n", idade);
   	printf("Origem: ");
   	
   switch (origem) {
      case 1:
         printf("Ourinhos\n");
         break;
	  case 2:
         printf("Salto Grande\n");
         break;
	  case 3:
         printf("Chavantes\n");
         break;
      case 4:
         printf("Ipaussu\n");
         break;
      case 5:
         printf("Piraju\n");
         break;
      case 6:
         printf("Marilia\n");
         break;
      case 7:
         printf("Bauru\n");
         break;
	  case 8:
         printf("Ibirarema\n");
         break;
	  case 9:
         printf("Palmital\n");
         break;	    
    }
   
   printf("Destino: ");
   switch (destino) {
   	  case 1:
   		 printf("Ourinhos\n");
         break;
   	  case 2:
         printf("Salto Grande\n");
         break;
      case 3:
         printf("Chavantes\n");
         break;
      case 4:
         printf("Ipaussu\n");
         break;
      case 5:
         printf("Piraju\n");
         break;
      case 6:
         printf("Marilia\n");
         break;
      case 7:
         printf("Bauru\n");
         break;
	  case 8:
         printf("Ibirarema\n");
         break;
	  case 9:
         printf("Palmital\n");
         break;   
    }

   printf("Horario de partida: ");
   switch (horario) {
      case 1:
         printf("4:00\n");
         break;
	  case 2:
         printf("8:00\n");
         break;
      case 3:
         printf("12:00\n");
         break;
      case 4:
         printf("16:00\n");
         break;
      case 5:
         printf("20:00\n");
         break;  
      case 6:
         printf("00:00\n");
         break;  
    }

   printf("Assento: ");
   switch (assento) {
      case 1:
         printf("Janela\n");
         break;
      case 2:
         printf("Corredor\n");
         break;
    }
  		 printf("Boa viagem !!\n");
}
