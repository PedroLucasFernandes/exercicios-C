/* Exercicio 06 - Criar um programa em linguagem C que faça a conversão
de 4 bits ( NIBLE ) em um numero decimal. */

#include<stdio.h>
#include<windows.h>

main(){
	system("cls");
	
	int bin1, bin2, bin3, bin4, decimal;
	
	printf("Insira um numero binario de 4 digitos: \n");
	scanf("%1d%1d%1d%1d", &bin1, &bin2, &bin3, &bin4);
	
	decimal = ((bin1 * 8) + (bin2 * 4) + (bin3 * 2) + (bin4 * 1));
	
	printf("Decimal: %d \n", decimal);
}
