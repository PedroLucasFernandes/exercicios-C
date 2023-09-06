// Exercicio 02 - Criar um programa em linguagem C que resolva a formula de Bhaskara. 

#include<stdio.h> 
#include<windows.h> 
#include<math.h> 

main (){ 

	system("cls"); 

	float a, b, c, x1, x2, delta; 

	printf("Insira o valor de a: \n"); 
	scanf("%f", &a); 

	printf("Insira o valor de b: \n"); 
	scanf("%f", &b); 

	printf("Insira o valor de c: \n"); 
	scanf("%f", &c); 

	delta = (b * b) - (4 * a * c); 

	x1 = (-b + sqrt(delta)) / (2 * a); 
	x2 = (-b - sqrt(delta)) / (2 * a); 

	printf("X1 = %.2f \n", x1); 
	printf("X2 = %.2f \n", x2); 
} 
