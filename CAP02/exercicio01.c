// Exercicio 01 - Criar um programa em linguagem C que efetue a soma de dois numeros dos tipo real. 
#include<stdio.h>
#include<windows.h>
#include<math.h>

main (){
	system("cls");
	
	float num1, num2, soma;
	
	printf("Digite o primeiro valor para a soma: \n");
	scanf("%f", &num1);
	
	printf("Digite o segundo valor para a soma: \n");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	printf("Soma = %.2f", soma);
}
