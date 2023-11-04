// char => é uma abreviação de caractere,armazenar letras numeros nomes e simbolos.

#include <stdio.h>
    int main() {
    char operacao; //  aqui ele vai pegar o operador
  float numero1 , numero2 , resultado; // aqui ele vai pegar os numeros
  printf("Bem vindo á  Calculadora do CS50 Live \n "); // aqui ele vai mostrar o titulo na tela
  printf("Digite o primeiro número: ");
  scanf("%f", &numero1);// aqui ele vai pegar o primeiro numero

  printf("Digite a Operação (+ , - , * , /): ");
  scanf(" %c", &operacao);// aqui ele vai pegar o operador
  printf("Digite o segundo número: ");
  scanf("%f", &numero2);// aqui ele vai pegar o segundo numero

  switch (operacao) {
    case '+':// caso for + 
      resultado = numero1 + numero2;
      break;
    case '-':
      resultado = numero1 - numero2;  
      break;
    case '*':
      resultado = numero1 * numero2;
      break;
    case '/':
      if(numero2 != 0){// se o numero 2 for diferente de zero o resultado é zero.
        resultado = numero1 / numero2;
      }else{ // se o numero 2 for igual a zero ele vai dar erro
        printf("Não é possivel dividir por zero.\n");
        return 1; //saída com 
        
      }
      break;// break ele para o codigo
      default:
      printf("Operação Inválida.\n");//mostra o valor da soma
      return 1;//encerra o programa.
      
    
        
    
  }
  printf("O resultado é: %.2f\n", resultado);
  return 0;
  
}