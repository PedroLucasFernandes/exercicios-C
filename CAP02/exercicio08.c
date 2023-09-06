// Exercicio 08  - Criar um programa em linguagem C que receba uma medida em pes, faca as conversoes em Polegadas, Jardas e Milhas e a seguir mostre os resultados.

#include<stdio.h>
#include<windows.h>

main(){
	system("cls");
	
	float pes, polegadas, jardas, milhas;
	
	printf("Insira uma medida em pes: \n");
	scanf("%f", &pes);
	
	polegadas = pes * 12;
	jardas = pes / 3;
	milhas = pes / 5280;
	
	printf("%.2f polegadas \n", polegadas);
	printf("%.2f jardas \n", jardas);
	printf("%.2f milhas \n", milhas);
}
