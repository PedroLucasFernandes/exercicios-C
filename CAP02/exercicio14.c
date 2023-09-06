/* Exercicio 14 - Crie um programa em C que receba a temperatura em °C(graus Celsius),
e converta para Fahrenheit e para Kelvin. */

#include<stdio.h>
#include<windows.h>

main(){
	system("cls");
	
	float C, F, K;
	
	printf("Insira uma temperatura em graus Celsius: \n");
	scanf("%f", &C);
	
	F = (C * 9/5) + 32;
	K = C + 273;
	
	printf("Valor em Fahrenheint: %.2f \n", F);
	printf("Valor em Kelvin: %.2f \n", K);
}
