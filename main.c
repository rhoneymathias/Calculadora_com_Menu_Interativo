/******************************************************************************


*******************************************************************************/
#include <stdio.h>
 void exibirMenu(){
    printf("selecione uma das quatro operações que você deseja realizar \n");
    printf("1 - somar \n 2 - Subtarir\n 3 - Multiplicar\n 4 - Dividir\n");
 }
    
float somar(float num1, float num2){ 
        float result = num1 + num2;
        return result; 
}

float subtrair(float num1, float num2){ 
        float result = num1 - num2;
        return result; 
}

float multiplicar(float num1, float num2){ 
        float result = num1 * num2;
        return result; 
}

float dividir(float num1, float num2){ 
        float result = num1 / num2;
        return result; 
}
    
int main()
{
    float num1 = 0.0;
    float num2 = 0.0;
    float result = 0.0;
    int operacao = -1;
    
    while(operacao !=0){
     
     exibirMenu();
     scanf("%d", &operacao); 
    
     printf("Informe o primeiro número\n");
     scanf("%f", &num1);
    
     printf("informe o segundo número\n");
     scanf("%f", &num2); 
    
    
     if(operacao == 1){
        result = somar(num1, num2);
     }else if(operacao == 2){
        result = subtrair(num1, num2);
     }else if (operacao == 3){
        result = multiplicar(num1, num2);
     }else if(operacao == 4){
        result = dividir(num1, num2);;
     }else{
      printf("Operação Inválida \n");
    }
    
    printf("O resultado é %.2f\n", result);
    
    printf("Deseja continuar? (1 - Sim  0- Não)\n");
    scanf("%d", &operacao);
    }
    
    return 0;
    
}