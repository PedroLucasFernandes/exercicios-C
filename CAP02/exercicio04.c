// Exercicio 04 - Criar um programa em linguagem C que faça a conversao de m em km, hm, dam, dc, cm e mm. 

#include<stdio.h>
#include<windows.h>

main (){ 

	system("cls"); 

	float metros, km, hm, dam, dc, cm, mm;

	printf("Insira um valor em metros: \n"); 
	scanf("%f", &metros);
	
	km = metros / 1000;
	hm = metros / 100;
	dam = metros / 10;
	dc = metros * 10;
	cm = metros * 100;
	mm = metros * 1000;
	
	printf("Valor em km: %f \n", km);
	printf("Valor em hm: %f \n", hm);
	printf("Valor em dam: %f \n", dam);
	printf("Valor em dc: %f \n", dc);
	printf("Valor em cm: %f \n", cm);
	printf("Valor em mm: %f \n", mm);
}
