// Exercício 05 - Criar um programa em linguagem C que converta um número decimal de 0 a 15 em número binário.

#include<stdio.h>
#include<windows.h>
#include<math.h>

main (){

	system("cls"); 
	
	int decimal, bin1, bin2, bin3, bin4;
	
	printf("Insira um numero entre 0 e 15: \n");
	scanf("%d", &decimal);
	
	bin1 = decimal % 2;
	decimal = floor(decimal / 2);
	
	bin2 = decimal % 2;
	decimal = floor(decimal / 2);
	
	bin3 = decimal % 2;
	decimal = floor(decimal / 2);
	
	bin4 = decimal % 2;
	decimal = floor(decimal / 2);
	
	printf("Segue o valor em binario: %d%d%d%d", bin4, bin3, bin2, bin1);
}
