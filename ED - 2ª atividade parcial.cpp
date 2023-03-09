#include<stdio.h>

int main(){
	
   int origem, destino, horario, assento;
   
   printf("Digite sua origem: \n");
   printf("1 - Sao Paulo\n");
   printf("2 - Rio de Janeiro\n");
   printf("3 - Belo Horizonte\n");
   scanf("%d", &origem);
   
   printf("Escolha seu destino: \n");
   printf("1 - Sao Paulo\n");
   printf("2 - Rio de Janeiro\n");
   printf("3 - Belo Horizonte\n");
   scanf("%d", &destino);
	
   printf("Escolha o horario de partida: \n");
   printf("1 - 8:00\n");
   printf("2 - 12:00\n");
   printf("3 - 16:00\n");
   scanf("%d", &horario);
   
   printf("Escolha o assento: \n");
   printf("1 - Janela\n");
   printf("2 - Corredor\n");
   scanf("%d", &assento);

   if (assento < 1 || assento > 2) {
      printf("Opçao invalida. Por favor, tente novamente.\n");
      return 0;
   }
   
   printf("Compra realizada com sucesso!\n");
   printf("Origem: ");
   switch (origem) {
      case 1:
         printf("Sao Paulo\n");
         break;
      case 2:
         printf("Rio de Janeiro\n");
         break;
      case 3:
         printf("Belo Horizonte\n");
         break;
   }
   
   printf("Destino: ");
   switch (destino) {
      case 1:
         printf("Sao Paulo\n");
         break;
      case 2:
         printf("Rio de Janeiro\n");
         break;
      case 3:
         printf("Belo Horizonte\n");
         break;
   }

   printf("Horario de partida: ");
   switch (horario) {
      case 1:
         printf("8:00\n");
         break;
      case 2:
         printf("12:00\n");
         break;
      case 3:
         printf("16:00\n");
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
   return 0;
}
